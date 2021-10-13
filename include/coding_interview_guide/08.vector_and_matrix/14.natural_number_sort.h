#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_NATURAL_NUMBER_SORT_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_NATURAL_NUMBER_SORT_H_

/*
【题目】
给定一个长度为N的整形数组arr，其中有N个互不相等的自然数1-N。
请实现arr的排序，但是不要把下标0∼N−1位置上的数通过直接赋值的方式替换成1∼N。
【要求】
时间复杂度O(N)，额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::natural_number_sort {

class NaturalNumberSort {
public:
    static void sort(std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::natural_number_sort

#endif
