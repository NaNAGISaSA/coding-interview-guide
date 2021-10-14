#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_SUBARR_MAX_SUM_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_SUBARR_MAX_SUM_H_

/*
【题目】
给定一个数组，返回子数组的最大累加和。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::subarr_max_sum {

class SubarrMaxSum {
public:
    static int max_sum(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::subarr_max_sum

#endif
