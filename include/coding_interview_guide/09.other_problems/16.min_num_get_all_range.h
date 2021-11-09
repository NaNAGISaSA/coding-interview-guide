#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_MIN_NUM_GET_ALL_RANGE_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_MIN_NUM_GET_ALL_RANGE_H_

/*
【题目】
给定一个正数数组arr和一个正数range，可以选择arr中的任意个数字加起来的和为sum。
返回最小需要往arr中添加几个数，使得sum可以取到1∼range范围上的每一个数。
*/

#include <vector>

namespace coding_interview_guide::other_problems::min_num_get_all_range {

class MinNumGetAllRange {
public:
    static unsigned int min_num(const std::vector<unsigned int>& vec, unsigned int range);
};

}  // namespace coding_interview_guide::other_problems::min_num_get_all_range

#endif
