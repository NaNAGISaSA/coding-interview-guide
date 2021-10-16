#include "08.vector_and_matrix/04.find_min_k_number.h"

namespace coding_interview_guide::vector_and_matrix::find_min_k_number {

// 使用堆来维护结果，相比于使用数组，能够将时间复杂度由O（N*k）降低到O（N*logk）
std::vector<int> FindMinKNumber::min_number(const std::vector<int>& vec, unsigned int k) {
    size_t vec_size = vec.size();
    if (vec_size == 0 || k == 0) {
        return {};
    } else if (k >= vec_size) {
        return vec;
    }

    std::vector<int> max_heap(k, 0);

    auto swap = [&max_heap](size_t index1, size_t index2) {
        int tmp = max_heap[index1];
        max_heap[index1] = max_heap[index2];
        max_heap[index2] = tmp;
    };

    // 为了保持最大堆结构，必须使用insert进行初始化
    auto heap_insert = [&max_heap, &swap, &k](size_t index, int value) {
        max_heap[index] = value;
        size_t parent_index = (index - 1) / 2;
        while (index != 0) {
            if (max_heap[parent_index] < max_heap[index]) {
                swap(index, parent_index);
                index = parent_index;
            } else {
                break;
            }
        }
    };

    auto heapify = [&max_heap, &swap, heap_size = k](size_t head_index) {
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
                return;
            } else {
                swap(largest_index, head_index);
            }
            head_index = largest_index;
            left = 2 * head_index + 1;
            right = 2 * head_index + 2;
        }
    };

    for (size_t i = 0; i < k; ++i) {
        heap_insert(i, vec[i]);
    }

    for (size_t i = k; i < vec_size; ++i) {
        if (vec[i] < max_heap[0]) {
            max_heap[0] = vec[i];
            heapify(0);
        }
    }
    return max_heap;
}

}  // namespace coding_interview_guide::vector_and_matrix::find_min_k_number
