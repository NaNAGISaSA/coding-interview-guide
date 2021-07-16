#include "01.stack_and_queue/10.find_arr_max_sub_min_le_num.h"

#include <deque>

namespace coding_interview_guide::stack_and_queue::find_arr_max_sub_min_le_num {

/*
对于数组arr[i, j]，如果其满足max(arr[i, j]) - min(arr[i, j]) <= num，则其每一个子数组也满足
对于数组arr[i, j]，如果其满足max(arr[i, j]) - min(arr[i, j]) > num，则包含它的每一个数组也满足
*/
size_t FindArrLeNum::find_arr(const std::vector<int>& input, const int num) {
    std::deque<size_t> max_queue, min_queue;
    size_t i = 0, j = 0, result = 0;
    while (i < input.size()) {
        while (j < input.size()) {
            if (!max_queue.size() || max_queue.back() != j) {
                while (max_queue.size() && input[max_queue.back()] < input[j]) {
                    max_queue.pop_back();
                }
                max_queue.push_back(j);
                while (min_queue.size() && input[min_queue.back()] > input[j]) {
                    min_queue.pop_back();
                }
                min_queue.push_back(j);
            }
            if (input[max_queue.front()] - input[min_queue.front()] > num) {
                break;
            }
            ++j;
        }
        result += j - i;
        if (max_queue.front() == i) {
            max_queue.pop_front();
        }
        if (min_queue.front() == i) {
            min_queue.pop_front();
        }
        ++i;
    }
    return result;
}

}  // namespace coding_interview_guide::stack_and_queue::find_arr_max_sub_min_le_num
