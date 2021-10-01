#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_FIND_BIGGER_NUMBER_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_FIND_BIGGER_NUMBER_H_

/*
【题目】
给定两个32位整数a和b，返回a和b中较大的，要求不能用任何比较判断运算符。
【要求】
时间复杂度O（1），额外空间复杂度O（1）。
*/

namespace coding_interview_guide::bitwise::find_bigger_number {

class FindBiggerNumber {
public:
    static int number(int a, int b);
    static int number_correct(int a, int b);
};

}  // namespace coding_interview_guide::bitwise::find_bigger_number

#endif