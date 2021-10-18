#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_ADJUST_ARR_PARTITION_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_ADJUST_ARR_PARTITION_H_

/*
【题目】
给定一个**有序**数组arr，调整arr使得这个数组的左半部分没有重复元素且升序，而不用保证右部分是否有序。
例如，arr = [1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 7, 7, 8, 8, 8, 9]，调整之后arr=[1, 2, 3, 4, 5, 6, 7, 8, 9, .....]。
【补充问题】
给定一个数组arr，其中只可能含有0、1、2三个值，请实现arr的排序。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::adjust_arr_partition {

class AdjustArrPartition {
public:
    static void adjust1(std::vector<int>& vec);
    static void adjust2(std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::adjust_arr_partition

#endif
