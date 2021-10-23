#include <functional>
#include <queue>

#include "08.vector_and_matrix/28.divide_gold_min_cost.h"

namespace coding_interview_guide::vector_and_matrix::divide_gold_min_cost {

unsigned int DivideGoldMinCost::min_cost(const std::vector<unsigned int>& vec) {
    if (vec.size() < 2) {
        return 0U;
    }
    std::priority_queue<unsigned int, std::vector<unsigned int>, std::greater<unsigned int>> min_heap;
    for (size_t i = 0; i < vec.size(); ++i) {
        min_heap.push(vec[i]);
    }
    unsigned int result = 0U;
    unsigned int tmp1 = 0U, tmp2 = 0U;
    while (min_heap.size() > 1) {
        tmp1 = min_heap.top();
        min_heap.pop();
        tmp2 = min_heap.top();
        min_heap.pop();
        result = result + tmp1 + tmp2;
        min_heap.push(tmp1 + tmp2);
    }
    return result;
}

}  // namespace coding_interview_guide::vector_and_matrix::divide_gold_min_cost
