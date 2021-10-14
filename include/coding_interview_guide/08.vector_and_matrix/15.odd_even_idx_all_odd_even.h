#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_ODD_EVEN_IDX_ALL_ODD_EVEN_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_ODD_EVEN_IDX_ALL_ODD_EVEN_H_

/*
【题目】
给定一个长度不小于2的数组arr，实现一个函数调整arr，要么让所有的偶数下标都是偶数，要么让所有的奇数下标都是奇数。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::odd_even_idx_all_odd_even {

class OddEvenIdxAllOddEven {
public:
    static void adjust(std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::odd_even_idx_all_odd_even

#endif
