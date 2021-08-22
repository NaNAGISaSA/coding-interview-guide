#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MATRIX_PATH_MIN_SUM_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MATRIX_PATH_MIN_SUM_H_

/*
【题目】
给定一个的矩阵 a，从左上角开始每次只能向右或者向下走，最后到达右下角的位置。
路径上所有的数字累加起来就是路径和，输出所有的路径中最小的路径和。
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::min_matrix_path {

class MinMatrixPath {
public:
    static long min_sum(std::vector<std::vector<long>>& matrix);
};

}  // namespace coding_interview_guide::dynamic_programming::min_matrix_path

#endif
