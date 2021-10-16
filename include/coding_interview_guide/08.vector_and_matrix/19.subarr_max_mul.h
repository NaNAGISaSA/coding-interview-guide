#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_SUBARR_MAX_MUL_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_SUBARR_MAX_MUL_H_

/*
【题目】
给定一个double类型的数组arr，其中的元素可正、可负、可0，返回子数组累乘的最大乘积。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::subarr_max_mul {

class SubarrMaxMul {
public:
    static double max_mul(const std::vector<double>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::subarr_max_mul

#endif
