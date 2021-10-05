#ifndef _CODEING_INTERVIEW_GUIDE_BIG_DATA_ISLAND_PROBLEM_H_
#define _CODEING_INTERVIEW_GUIDE_BIG_DATA_ISLAND_PROBLEM_H_

/*
【题目】
给定一个二维数组matrix，其中只有0和1两种值，每一个位置都与其它位置上下左右相邻。
如果一堆1可以连成一片，这片区域叫一个岛。返回matrix中岛的数量。
*/

#include <vector>

namespace coding_interview_guide::big_data::island_problem {

class IslandProblem {
public:
    static unsigned int island_number(const std::vector<std::vector<unsigned int>>& island);
};

}  // namespace coding_interview_guide::big_data::island_problem

#endif