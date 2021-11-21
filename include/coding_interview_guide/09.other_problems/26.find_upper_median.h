#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_FIND_UPPER_MEDIAN_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_FIND_UPPER_MEDIAN_H_

/*
【题目】
给定两个有序数组arr1和arr2，已知两个数组的长度都为N，求两个数组中所有数的上中位数。
【要求】
时间复杂度O（logN）,额外空间复杂度O(1)。
*/

#include <vector>

namespace coding_interview_guide::other_problems::find_upper_median {

class FindUpperMedian {
public:
    static int upper_median(const std::vector<int>& vec1, const std::vector<int>& vec2);
};

}  // namespace coding_interview_guide::other_problems::find_upper_median

#endif
