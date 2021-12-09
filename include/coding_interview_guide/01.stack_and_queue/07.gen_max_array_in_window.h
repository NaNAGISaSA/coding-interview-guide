#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_GEN_MAX_ARRAY_IN_WINDOW_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_GEN_MAX_ARRAY_IN_WINDOW_H_

/*
【题目】
有一个整型数组arr和一个大小为w的窗口从数组的最左边滑到最右边，窗口每次向右边滑一个位置，求每一种窗口状态下的最大值。
（如果数组长度为n，窗口大小为w，则一共产生n-w+1个窗口的最大值）
【要求】
给出时间复杂度O(n)的解法
【备注】
1 <= w <= n <= 1000000
−1000000 <= element <= 1000000
*/

#include <vector>

namespace coding_interview_guide::stack_and_queue::gen_max_array_in_window {

class GenMaxArrayInWindow {
public:
    static std::vector<int> get_max_array(const std::vector<int>& input, size_t window_length);
};

}  // namespace coding_interview_guide::stack_and_queue::gen_max_array_in_window

#endif