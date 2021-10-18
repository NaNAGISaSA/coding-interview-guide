#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_BORDER_ONE_MAX_SQUARE_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_BORDER_ONE_MAX_SQUARE_H_

/*
【题目】
给定一个N×N的矩阵matrix，在这个矩阵中，只有0和1两种值，返回边框全是1的最大正方形的边长长度。
【要求】
时间复杂度O（N^3），额外空间复杂度O（N^2）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::border_one_max_square {

class BorderOneMaxSquare {
public:
    static unsigned int max_square(const std::vector<std::vector<unsigned int>>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::border_one_max_square

#endif
