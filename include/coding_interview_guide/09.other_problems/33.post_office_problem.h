#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_POST_OFFICE_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_POST_OFFICE_PROBLEM_H_

/*
【题目】
一条直线上有居民点，邮局只能建在居民点上。给定一个有序整形数组arr，每个值表示居民点的一维坐标，再给定一个正数num，表示邮局数量。
选择num个居民点建立num个邮局，使所有的居民点到邮局的总距离最短，返回最短的总距离。
*/

#include <vector>

namespace coding_interview_guide::other_problems::post_office_problem {

class PostOfficeProblem {
public:
    static unsigned int min_distance(const std::vector<unsigned int>& vec, unsigned int num);
};

}  // namespace coding_interview_guide::other_problems::post_office_problem

#endif