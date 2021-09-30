#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_DICT_MAX_XOR_VALUE_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_DICT_MAX_XOR_VALUE_H_

/*
【题目】
数组异或和的定义：把数组中所有的数异或起来得到的值。给定一个整型数组arr，其中可能有正、有负，有零，求其中子数组的最大异或和。
【要求】
时间复杂度O（N）。
*/

#include <vector>

namespace coding_interview_guide::string::max_xor_value {

class MaxXorValue {
public:
    static int max_value(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::string::max_xor_value

#endif