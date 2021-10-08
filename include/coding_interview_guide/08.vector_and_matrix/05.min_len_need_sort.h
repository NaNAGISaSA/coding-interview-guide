#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MIN_LEN_NEED_SORT_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MIN_LEN_NEED_SORT_H_

/*
【题目】
给定一个无序数组arr，求出需要排序的最短子数组的长度，对子数组排序后能使得整个数组有序，即为需要排序的数组。
例如：arr=[1,5,3,4,2,6,7]返回4，因为只有[5,3,4,2]需要排序。
【要求】
时间复杂度O(N)，额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::min_len_need_sort {

class MinLenNeedSort {
public:
    static unsigned long min_len(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::min_len_need_sort

#endif
