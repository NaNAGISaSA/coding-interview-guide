#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MULTI_NOT_CONTAIN_CURR_IDX_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MULTI_NOT_CONTAIN_CURR_IDX_H_

/*
【题目】
给定一个数组arr，返回不包含本位置值的累乘数组。
例如，arr=[2,3,1,4]，返回[12, 8, 24, 6]，即除自己外，其他位置上的累乘。
【进阶】
时间和空间复杂度要求不变，且不可以使用除法。
【要求】
时间复杂度O（N），除需要返回的结果数组外额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::multi_not_contain_curr_idx {

class MultiNotContainCurrIdx {
public:
    static std::vector<int> multi_result(const std::vector<int>& vec);
    static std::vector<int> multi_result_adv(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::multi_not_contain_curr_idx

#endif
