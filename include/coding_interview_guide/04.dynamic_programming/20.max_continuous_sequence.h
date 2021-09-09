#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_CONTINUOUS_SEQUENCE_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_CONTINUOUS_SEQUENCE_H_

/*
【题目】
给定无序数组arr，返回其中最长的连续序列的长度(要求值连续，位置可以不连续,例如 3,4,5,6为连续的自然数）
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::max_continuous_sequence {

class MaxContinuousSequence {
public:
    static unsigned int length(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::dynamic_programming::max_continuous_sequence

#endif
