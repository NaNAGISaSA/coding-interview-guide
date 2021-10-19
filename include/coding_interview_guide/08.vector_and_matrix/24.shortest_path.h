#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_SHORTEST_PATH_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_SHORTEST_PATH_H_

/*
【题目】
用一个整形矩阵matrix表示一个网格，1代表有路，0代表无路，每一个位置只要不越界，都有上下左右四个方向，求从最左上角到右下角的最短通路值。
【要求】
时间复杂度O（m*n），额外空间复杂度O（m*n）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::shortest_path {

class ShortestPath {
public:
    static long shortest_path(const std::vector<std::vector<unsigned int>>& mat);
};

}  // namespace coding_interview_guide::vector_and_matrix::shortest_path

#endif
