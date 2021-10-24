#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_CONTAINER_WATER_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_CONTAINER_WATER_PROBLEM_H_

/*
【题目】
给定一个整形数组arr，已知其中所有的值都是非负的，将这个数组看作一个容器，请返回容器能装多少水。
示例：vec = [3, 1, 2, 5, 2, 4]，返回5。
         |
         |  x  |
|  x  x  |  x  |
|  x  |  |  |  |
|  |  |  |  |  |
----------------
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::container_water_problem {

class ContainerWaterProblem {
public:
    static unsigned int capacity(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::container_water_problem

#endif