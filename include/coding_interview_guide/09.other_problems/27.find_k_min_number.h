#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_FIND_K_MIN_NUMBER_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_FIND_K_MIN_NUMBER_H_

/*
【题目】
给定两个有序数组arr1和arr2，再给定一个整数K，返回所有数中第K小的数。
【要求】
如果arr1的长度为N，arr2的长度为M，时间复杂度请达到O(log(min(N,M)))，额外空间复杂度O(1)。
*/

#include <vector>

namespace coding_interview_guide::other_problems::find_k_min_number {

class FindKMinNumber {
public:
    static int find_number(const std::vector<int>& vec1, const std::vector<int>& vec2, unsigned int k);
};

}  // namespace coding_interview_guide::other_problems::find_k_min_number

#endif
