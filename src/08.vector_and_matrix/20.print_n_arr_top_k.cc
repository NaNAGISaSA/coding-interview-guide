#include <iostream>

#include "08.vector_and_matrix/20.print_n_arr_top_k.h"

namespace coding_interview_guide::vector_and_matrix::print_n_arr_top_k {

namespace {
struct Node {
    Node(size_t vec_idx, size_t arr_idx, int val) : vec_index(vec_idx), arr_index(arr_idx), value(val) {
    }

    bool operator<(const Node& node) const {
        return value < node.value;
    }

    size_t vec_index;
    size_t arr_index;
    int value;
};
}  // namespace

void PrintNArrTopK::print(const std::vector<std::vector<int>>& vec, int k) {
    size_t vec_size = vec.size();
    if (vec_size == 0 || k <= 0) {
        return;
    }
    std::vector<Node> max_heap;

    auto insert_heap = [&max_heap, &vec](size_t vec_index, size_t arr_index) {
        max_heap.push_back(Node(vec_index, arr_index, vec[vec_index][arr_index]));
        size_t curr_index = max_heap.size() - 1, parent_index = (curr_index - 1) / 2;
        while (curr_index != 0) {
            if (max_heap[parent_index] < max_heap[curr_index]) {
                std::swap(max_heap[parent_index], max_heap[curr_index]);
                curr_index = parent_index;
                parent_index = (curr_index - 1) / 2;
            } else {
                break;
            }
        }
    };

    auto heapify = [&max_heap](size_t head_index, size_t heap_size) {
        size_t left = 2 * head_index + 1, right = 2 * head_index + 2;
        size_t largest_index = head_index;
        while (left < heap_size) {
            if (max_heap[head_index] < max_heap[left]) {
                largest_index = left;
            }
            if (right < heap_size && max_heap[largest_index] < max_heap[right]) {
                largest_index = right;
            }
            if (largest_index == head_index) {
                break;
            } else {
                std::swap(max_heap[largest_index], max_heap[head_index]);
            }
            head_index = largest_index;
            left = 2 * head_index + 1;
            right = 2 * head_index + 2;
        }
    };

    for (size_t i = 0; i < vec_size; ++i) {
        insert_heap(i, vec[i].size() - 1);
    }

    size_t curr_vec_index = 0, curr_arr_index = 0;
    std::cout << "Top " << k << ": ";

    for (int i = 0; i < k; ++i) {
        std::cout << max_heap[0].value;
        curr_vec_index = max_heap[0].vec_index;
        curr_arr_index = max_heap[0].arr_index;
        if (curr_arr_index == 0) {
            if (max_heap.size() == 1) {
                return;
            }
            max_heap[0] = max_heap[max_heap.size() - 1];
            max_heap.pop_back();
        } else {
            max_heap[0] = Node(curr_vec_index, curr_arr_index - 1, vec[curr_vec_index][curr_arr_index - 1]);
        }
        if (i != k - 1) {
            std::cout << ", ";
        }
        heapify(0, max_heap.size());
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::print_n_arr_top_k
