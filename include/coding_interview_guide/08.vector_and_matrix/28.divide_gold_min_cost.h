#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_DIVIDE_GOLD_MIN_COST_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_DIVIDE_GOLD_MIN_COST_H_

/*
【题目】
给定一个正数数组arr，arr的累加和代表金条的总长度，arr的每个数代表金条要分成的长度。
规定长度为k的金条分成两块，费用为k个铜板。返回把金条分出arr中的每个数字需要的最小代价。
【要求】
时间复杂度O（NlogN），额外空间复杂度O（N）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::divide_gold_min_cost {

class DivideGoldMinCost {
public:
    static unsigned int min_cost(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::divide_gold_min_cost

#endif