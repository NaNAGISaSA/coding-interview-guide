#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_SPLICE_RECTANGLE_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_SPLICE_RECTANGLE_H_

/*
【题目】
每条边不是平行于X轴就是平行于Y轴的矩形，可以用左下角和右上角的点来表示。
给定一个N行4列的二维数组matrix，表示N个每条边不是平行于X轴就是平行于Y轴的矩形。想知道所有的矩形能否组成一个大的完美矩形。
完美矩形是指拼出的整体图案是矩形，既不缺任何块儿，也没有重合部分。
【要求】
时间复杂度为O(n)，额外空间复杂度为O(n)。
*/

#include <vector>

namespace coding_interview_guide::other_problems::splice_rectangle {

class SpliceRectangle {
public:
    static bool can_splice(const std::vector<std::vector<int>>& regions);
};

}  // namespace coding_interview_guide::other_problems::splice_rectangle

#endif