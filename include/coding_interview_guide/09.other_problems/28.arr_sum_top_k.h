#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_ARR_SUM_TOP_K_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_ARR_SUM_TOP_K_H_

/*
【题目】
给定两个有序数组arr1和arr2，再给定一个整数k，返回来自arr1和arr2的两个数相加和最大的前k个，两个数必须分别来自两个数组。
【要求】
时间复杂度为O（klogk）；
*/

#include <vector>

namespace coding_interview_guide::other_problems::arr_sum_top_k {

class ArrSumTopK {
public:
    static std::vector<int> topk(const std::vector<int>& vec1, const std::vector<int>& vec2, unsigned int k);
};

}  // namespace coding_interview_guide::other_problems::arr_sum_top_k

#endif
