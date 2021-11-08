#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_MIN_NO_POSSIBLE_SUM_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_MIN_NO_POSSIBLE_SUM_H_

/*
【题目】
给定一个正数数组arr，其中所有的值都为整数，以下是最小不可组成和的概念：
把arr每个子集内的所有元素加起来会出现很多值，其中最小的记为min，最大的记为max
在区间[min, max]上，如果有数不可以被arr某一个子集相加得到，那么其中最小的那个数是arr的最小不可组成和
在区间[min, max]上，如果所有的数都可以被arr的某一个子集相加得到，那么max+1是arr的最小不可组成和
请写函数返回正数数组arr的最小不可组成和。
【进阶】
保证正数数组中肯定有1，要求做到时间复杂度为O(NlogN)。
*/

#include <vector>

namespace coding_interview_guide::other_problems::min_no_possible_sum {

class MinNoPossibleSum {
public:
    static unsigned int min_value(const std::vector<unsigned int>& vec);
    static unsigned int min_value_adv(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::other_problems::min_no_possible_sum

#endif
