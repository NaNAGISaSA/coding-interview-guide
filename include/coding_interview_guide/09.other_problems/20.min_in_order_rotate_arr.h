#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_MIN_IN_ORDER_ROTATE_ARR_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_MIN_IN_ORDER_ROTATE_ARR_H_

/*
【题目】
有序数组arr可能经过一次旋转处理，也可能没有，且arr可能存在重复的数。例如，有序数组[1, 2, 3, 4, 5, 6,
7]，可以旋转处理成[4, 5, 6, 7, 1, 2, 3]等。给定一个可能旋转过的有序数组arr，返回arr中的最小值。
【要求】
时间复杂度为O(logN)
*/

#include <vector>

namespace coding_interview_guide::other_problems::min_in_order_rotate_arr {

class MinInOrderRotateArr {
public:
    static int get_min(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::other_problems::min_in_order_rotate_arr

#endif
