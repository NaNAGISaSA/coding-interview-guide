#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_SUB_AFTER_SORT_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_SUB_AFTER_SORT_H_

/*
【题目】
给定一个整形数组arr，返回排序后相邻两数的最大差值。
【要求】
时间复杂度O（N），额外空间复杂度O（N）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::max_sub_after_sort {

class MaxSubAfterSort {
public:
    static unsigned int max_sub(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::max_sub_after_sort

#endif