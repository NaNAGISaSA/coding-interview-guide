#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_XOR_ZERO_SUB_ARR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_XOR_ZERO_SUB_ARR_H_

/*
【题目】
给定一个整型数组arr，其中可能有正有负有零。你可以随意把整个数组切成若干个不相容的子数组，求异或和为0的子数组最多可能有多少个？
整数异或和定义：把数组中所有的数异或起来得到的值。
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::max_xor_zero_sub_arr {

class MaxXorZeroSubArr {
public:
    static unsigned int max_number(const std::vector<int>& vec);
    static unsigned int max_number_space_opt(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::dynamic_programming::max_xor_zero_sub_arr

#endif