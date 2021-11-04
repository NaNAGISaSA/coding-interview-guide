#include <unordered_map>

#include "09.other_problems/11.design_lfu_struct.h"

namespace coding_interview_guide::other_problems::design_lfu_struct {

template <typename T>
struct Node {
    Node(const T& val) : value(val), prev(nullptr), next(nullptr) {
    }
    Node(T&& val) : value(std::move(val)), prev(nullptr), next(nullptr) {
    }

    T value;
    Node<T>* prev;
    Node<T>* next;
};

template struct Node<int>;

struct DoubleLinkedList {
    DoubleLinkedList()
        : size(2),
          prev(nullptr),
          next(nullptr),
          dummy_head(std::make_unique<Node<int>>(0)),
          dummy_tail(std::make_unique<Node<int>>(0)),
          head(dummy_head.get()),
          tail(dummy_tail.get()) {
        head->next = tail;
        tail->prev = head;
    }

    void remove_node(Node<int>* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        --size;
    }

    void push_front(Node<int>* node) {
        Node<int>* curr_front = head->next;
        head->next = node;
        node->prev = head;
        node->next = curr_front;
        curr_front->prev = node;
        ++size;
    }

    Node<int>* get_last_node() {
        return tail->prev == head ? nullptr : tail->prev;
    }

    void pop_back() {
        if (size > 2) {
            remove_node(tail->prev);
        }
    }

    size_t size;
    DoubleLinkedList* prev;
    DoubleLinkedList* next;
    std::unique_ptr<Node<int>> dummy_head;
    std::unique_ptr<Node<int>> dummy_tail;
    Node<int>* head;  // always dummy head
    Node<int>* tail;  // always dummy tail
};

struct LFUCache::Impl {
public:
    Impl(size_t size)
        : dummy_head{std::make_unique<DoubleLinkedList>()},
          dummy_tail{{std::make_unique<DoubleLinkedList>()}},
          head{dummy_head.get()},
          tail{dummy_tail.get()},
          element_map{},
          node_key_map{},
          linkedlist_map{},
          curr_size{0},
          max_size{size} {
        head->next = tail;
        tail->prev = head;
    }

    void set(int key, int value) {
        if (element_map.find(key) != element_map.end()) {
            element_map[key].second->value = value;
            set_get_exist_key(key);
            return;
        }

        if (curr_size == max_size) {
            int key = node_key_map.at(head->next->get_last_node());
            if (head->next->size == 3) {
                head->next = head->next->next;
                head->next->prev = head;
                linkedlist_map.erase(element_map[key].first);
            } else {
                head->next->pop_back();
            }
            node_key_map.erase(element_map[key].second.get());
            element_map.erase(key);
            --curr_size;
        }

        if (linkedlist_map.find(1) == linkedlist_map.end()) {
            linkedlist_map.insert(std::make_pair(1, std::make_unique<DoubleLinkedList>()));
            linkedlist_map[1].get()->prev = head;
            linkedlist_map[1].get()->next = head->next;
            head->next->prev = linkedlist_map[1].get();
            head->next = linkedlist_map[1].get();
        }
        element_map.insert(std::make_pair(key, std::make_pair(1, std::make_unique<Node<int>>(value))));
        node_key_map.insert(std::make_pair(element_map[key].second.get(), key));
        linkedlist_map[1]->push_front(element_map[key].second.get());
        ++curr_size;
    }

    int get(int key) {
        if (element_map.find(key) == element_map.end()) {
            return -1;
        }
        set_get_exist_key(key);
        return element_map[key].second->value;
    }

private:
    void set_get_exist_key(int key) {
        int curr_count = element_map[key].first;
        DoubleLinkedList* prev = linkedlist_map[curr_count]->prev;
        DoubleLinkedList* next = linkedlist_map[curr_count]->next;
        if (linkedlist_map[curr_count]->size == 3) {
            prev->next = next;
            next->prev = prev;
            linkedlist_map.erase(curr_count);
        } else {
            linkedlist_map[curr_count]->remove_node(element_map[key].second.get());
            prev = linkedlist_map[curr_count].get();
        }
        ++curr_count;
        element_map[key].first = curr_count;
        if (linkedlist_map.find(curr_count) == linkedlist_map.end()) {
            linkedlist_map.insert(std::make_pair(curr_count, std::make_unique<DoubleLinkedList>()));
            prev->next = linkedlist_map[curr_count].get();
            linkedlist_map[curr_count].get()->prev = prev;
            linkedlist_map[curr_count].get()->next = next;
            next->prev = linkedlist_map[curr_count].get();
        }
        linkedlist_map[curr_count]->push_front(element_map[key].second.get());
    }

    std::unique_ptr<DoubleLinkedList> dummy_head;
    std::unique_ptr<DoubleLinkedList> dummy_tail;
    DoubleLinkedList* head;  // always dummy head
    DoubleLinkedList* tail;  // always dummy tail
    std::unordered_map<int, std::pair<int, std::unique_ptr<Node<int>>>> element_map;  // <key, <count, Node*>>
    std::unordered_map<Node<int>*, int> node_key_map;
    std::unordered_map<int, std::unique_ptr<DoubleLinkedList>> linkedlist_map;  // <count, linkedlist>
    size_t curr_size;
    size_t max_size;
};

LFUCache::LFUCache(size_t size) : pimpl(std::make_unique<Impl>(size)) {
}

LFUCache::~LFUCache() = default;

void LFUCache::set(int key, int value) {
    pimpl->set(key, value);
}
int LFUCache::get(int key) {
    return pimpl->get(key);
}

}  // namespace coding_interview_guide::other_problems::design_lfu_struct
