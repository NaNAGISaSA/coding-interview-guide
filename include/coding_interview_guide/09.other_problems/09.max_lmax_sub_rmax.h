#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_MAX_LMAX_SUB_RMAX_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_MAX_LMAX_SUB_RMAX_H_

/*
【题目】
给定一个长度为N(N>1)的整形数组arr, 可以划分成左右两个部分，左部分为arr[0…K]，右部分为arr[K+1…N-1],
K可以取值的范围是[0,N-2]。 求这么多划分方案中，左部分中的最大值减去右部分最大值的绝对值中，最大是多少。
【要求】
时间复杂度为O(n)，额外空间复杂度为O(n)。
*/

#include <vector>

namespace coding_interview_guide::other_problems::max_lmax_sub_rmax {

class MaxLmaxSubRmax {
public:
    static unsigned int max_value(const std::vector<int>& vec);
    static unsigned int max_value_opt(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::other_problems::max_lmax_sub_rmax

#endif
