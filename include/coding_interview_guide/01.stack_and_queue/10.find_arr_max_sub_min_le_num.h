#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_FIND_ARR_MAX_SUB_MIN_LE_NUM_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_FIND_ARR_MAX_SUB_MIN_LE_NUM_H_

/*
【题目】
给定数组 arr 和整数 num，共返回有多少个子数组满足如下情况：
max(arr[i...j]) - min(arr[i...j]) <= num
max(arr[i...j])表示子数组arr[i...j]中的最大值，min[arr[i...j])表示子数组arr[i...j]中的最小值。
【要求】
给出为O(N)复杂度的解法。
【备注】
1 <= 数组长度 <= 1000000
0 <= num <= 2000000
*/

#include <vector>

namespace coding_interview_guide::stack_and_queue::find_arr_max_sub_min_le_num {

class FindArrLeNum {
public:
    static size_t find_arr(const std::vector<int>& input, const int num);
};

}  // namespace coding_interview_guide::stack_and_queue::find_arr_max_sub_min_le_num

#endif
