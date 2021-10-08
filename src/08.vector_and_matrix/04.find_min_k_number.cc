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

    for (size_t i = 0; i < k; ++i) {
        heap_insert(i, vec[i]);
    }

    auto heapify = [&max_heap, &swap, heap_size = k](size_t index) {
        while (true) {
            if (2 * index + 1 >= heap_size) {
                return;
            }
            if (2 * index + 2 == heap_size) {
                if (max_heap[index] > max_heap[2 * index + 1]) {
                    return;
                }
                swap(index, 2 * index + 1);
                index = 2 * index + 1;
            } else {
                if (max_heap[index] > max_heap[2 * index + 1] && max_heap[index] > max_heap[2 * index + 2]) {
                    return;
                }
                if (max_heap[2 * index + 1] > max_heap[2 * index + 2]) {
                    swap(index, 2 * index + 1);
                    index = 2 * index + 1;
                } else {
                    swap(index, 2 * index + 2);
                    index = 2 * index + 2;
                }
            }
        }
    };

    for (size_t i = k; i < vec_size; ++i) {
        if (vec[i] < max_heap[0]) {
            max_heap[0] = vec[i];
            heapify(0);
        }
    }
    return max_heap;
}

}  // namespace coding_interview_guide::vector_and_matrix::find_min_k_number
