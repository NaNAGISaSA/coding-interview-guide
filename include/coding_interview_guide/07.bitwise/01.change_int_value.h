#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CHANGE_INT_VALUE_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CHANGE_INT_VALUE_H_

/*
【题目】
不用额外变量交换两个整数的值。
【要求】
时间复杂度O（1），额外空间复杂度O（1）。
*/

namespace coding_interview_guide::bitwise::change_int_value {

class SwapValue {
public:
    static void swap(int& a, int& b);
};

}  // namespace coding_interview_guide::bitwise::change_int_value

#endif