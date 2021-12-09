#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_MONOTONE_STACK_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_MONOTONE_STACK_H_

/*
【题目】
给定一个不含有重复值的数组arr，找到每一个i位置左边和右边离i位置最近且值比arr[i]小的位置。返回所有位置相应的信息。
【要求】
给出时间复杂度为O(n)的解法。
【进阶】
当数组arr的值可能重复时，同样给出为O(n)复杂度的解法。
*/

#include <vector>

namespace coding_interview_guide::stack_and_queue::monotone_stack {

class MonotoneStack {
public:
    static std::vector<std::vector<int>> get_near_less_no_repeat(const std::vector<int>& input);
    static std::vector<std::vector<int>> get_near_less_with_repeat(const std::vector<int>& input);
};

}  // namespace coding_interview_guide::stack_and_queue::monotone_stack

#endif