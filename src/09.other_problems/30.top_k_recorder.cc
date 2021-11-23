#include <iostream>
#include <unordered_map>
#include <vector>

#include "09.other_problems/30.top_k_recorder.h"

namespace coding_interview_guide::other_problems::top_k_recorder {

struct Node {
    Node(const std::string& str, unsigned int times) : element(str), count(times) {
    }

    std::string element;
    unsigned int count;
};

struct TopKRecorder::Impl {
    Impl(unsigned int k) : node_map{}, index_map{}, min_heap{}, heap_size(k) {
    }

    void add(const std::string& str) {
        if (node_map.find(str) == node_map.end()) {
            node_map.insert(std::make_pair(str, std::make_unique<Node>(str, 1U)));
        } else {
            ++(node_map[str]->count);
        }
        if (index_map.find(node_map[str].get()) != index_map.end()) {
            heapify(0, min_heap.size());
            return;
        }
        if (min_heap.size() != heap_size) {
            min_heap.push_back(node_map[str].get());
            index_map.insert(std::make_pair(node_map[str].get(), min_heap.size() - 1));
            insert_heap(min_heap.size() - 1);
        } else if (node_map[str]->count > min_heap[0]->count) {
            index_map.erase(min_heap[0]);
            index_map.insert(std::make_pair(node_map[str].get(), 0));
            min_heap[0] = node_map[str].get();
            heapify(0, min_heap.size());
        }
    }

    void print_top_k() {
        for (size_t i = 0; i < min_heap.size(); ++i) {
            std::cout << min_heap[i]->element << ": " << min_heap[i]->count << std::endl;
        }
    }

private:
    void heapify(size_t root, size_t heap_size) {
        size_t left = 2 * root + 1, right = 2 * root + 2;
        size_t minimum = root;
        while (left < heap_size) {
            if (min_heap[left]->count < min_heap[root]->count) {
                minimum = left;
            }
            if (right < heap_size && min_heap[right]->count < min_heap[minimum]->count) {
                minimum = right;
            }
            if (minimum == root) {
                return;
            } else {
                index_map[node_map[min_heap[root]->element].get()] = minimum;
                index_map[node_map[min_heap[minimum]->element].get()] = root;
                std::swap(min_heap[root], min_heap[minimum]);
            }
            root = minimum;
            left = 2 * root + 1;
            right = 2 * root + 2;
        }
    }

    void insert_heap(size_t index) {
        size_t parent = (index - 1) / 2;
        while (index != 0) {
            if (min_heap[parent]->count > min_heap[index]->count) {
                index_map[node_map[min_heap[index]->element].get()] = parent;
                index_map[node_map[min_heap[parent]->element].get()] = index;
                std::swap(min_heap[index], min_heap[parent]);
                index = parent;
                parent = (index - 1) / 2;
            } else {
                break;
            }
        }
    }

    std::unordered_map<std::string, std::unique_ptr<Node>> node_map;
    std::unordered_map<Node*, size_t> index_map;
    std::vector<Node*> min_heap;
    unsigned int heap_size;
};

TopKRecorder::TopKRecorder(unsigned int k) : pimpl(std::make_unique<Impl>(k)) {
}

TopKRecorder::~TopKRecorder() = default;

void TopKRecorder::add(const std::string& str) {
    pimpl->add(str);
}

void TopKRecorder::print_top_k() {
    pimpl->print_top_k();
}

}  // namespace coding_interview_guide::other_problems::top_k_recorder
