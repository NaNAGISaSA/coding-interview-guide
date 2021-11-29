#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_PAINTER_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_PAINTER_PROBLEM_H_

/*
【题目】
给定一个整型数组arr,数组中的每个值都为正数，表示完成一幅画作需要的时间，
再给定一个整数num，表示画匠的数量，每个画匠只能画连在一起(即数组内连续的一段)的画作。
所有画家并行工作，请返回完成所有的画作的最少时间。
*/

#include <vector>

namespace coding_interview_guide::other_problems::painter_problem {

class PainterProblem {
public:
    static unsigned int min_time(const std::vector<unsigned int>& vec, unsigned int num);
    static unsigned int min_time_opt(const std::vector<unsigned int>& vec, unsigned int num);
};

}  // namespace coding_interview_guide::other_problems::painter_problem

#endif