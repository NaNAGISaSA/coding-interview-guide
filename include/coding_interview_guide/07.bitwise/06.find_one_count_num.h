#ifndef _CODING_INTERVIEW_GUIDE_STRING_FIND_ONE_COUNT_NUM_H_
#define _CODING_INTERVIEW_GUIDE_STRING_FIND_ONE_COUNT_NUM_H_

/*
【题目】
给定一个整型数组arr和一个大于1的整数k。已知arr中只有1个数出现了一次，其他的数出现k次，请返回出现了1次的数。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::bitwise::find_one_count_num {

class FindOneCountNumber {
public:
    static int find(const std::vector<int>& vec, unsigned int k);
};

}  // namespace coding_interview_guide::bitwise::find_one_count_num

#endif
