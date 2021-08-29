#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_SUB_ARR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_SUB_ARR_H_

/*
【题目】
给定数组arr，设长度为N，输出arr的最长递增子序列。（如果有多个答案，请输出其中字典序最小的）
【要求】
时间复杂度为O(NlogN)
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::max_sub_arr {

class MaxSubArr {
public:
    static std::vector<unsigned int> arr(const std::vector<unsigned int>& vec);
    static std::vector<unsigned int> arr_time_opt(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::dynamic_programming::max_sub_arr

#endif
