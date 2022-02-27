#include <unordered_map>

#include "09.other_problems/10.design_lru_struct.h"

namespace coding_interview_guide::other_problems::design_lru_struct {

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
    DoubleLinkedList() : head(-1), tail(-1), dummy_head(&head), dummy_tail(&tail), size(0) {
        dummy_head->next = dummy_tail;
        dummy_tail->prev = dummy_head;
    }

    void remove_node(Node<int>* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        --size;
    }

    void push_front(Node<int>* node) {
        node->prev = dummy_head;
        node->next = dummy_head->next;
        dummy_head->next->prev = node;
        dummy_head->next = node;
        ++size;
    }

    Node<int>* get_last_node() {
        return dummy_tail->prev;
    }

    Node<int> head;
    Node<int> tail;
    Node<int>* dummy_head;  // always &head
    Node<int>* dummy_tail;  // always &tail
    size_t size;
};

struct LRUCache::Impl {
public:
    Impl(size_t size) : capacity{size}, list{DoubleLinkedList{}}, map{}, map2{} {
    }

    void set(int key, int value) {
        if (map.find(key) != map.end()) {
            map[key]->value = value;
            list.remove_node(map[key].get());
            list.push_front(map[key].get());
            return;
        }
        if (list.size == capacity) {
            Node<int>* last_node = list.get_last_node();
            int key = map2[last_node];
            list.remove_node(last_node);
            map2.erase(last_node);
            map.erase(key);
        }
        map.insert(std::make_pair(key, std::make_unique<Node<int>>(value)));
        map2.insert({map[key].get(), key});
        list.push_front(map[key].get());
    }

    int get(int key) {
        if (map.find(key) != map.end()) {
            list.remove_node(map[key].get());
            list.push_front(map[key].get());
            return map[key]->value;
        }
        return -1;
    }

private:
    size_t capacity;
    DoubleLinkedList list;
    std::unordered_map<int, std::unique_ptr<Node<int>>> map;
    std::unordered_map<Node<int>*, int> map2;
};

LRUCache::LRUCache(size_t size) : pimpl(std::make_unique<Impl>(size)) {
}

LRUCache::~LRUCache() = default;

void LRUCache::set(int key, int value) {
    pimpl->set(key, value);
}

int LRUCache::get(int key) {
    return pimpl->get(key);
}

}  // namespace coding_interview_guide::other_problems::design_lru_struct
