#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_NON_EXIST_MIN_POS_NUM_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_NON_EXIST_MIN_POS_NUM_H_

/*
【题目】
给定一个无序整形数组arr，找到数组中未出现的最小正整数。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::non_exist_min_pos_num {

class NonExistMinPosNum {
public:
    static unsigned int pos_num(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::non_exist_min_pos_num

#endif
