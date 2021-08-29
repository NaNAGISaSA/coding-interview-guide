#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_ENVELOPE_NEST_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_ENVELOPE_NEST_PROBLEM_H_

/*
【题目】
给n个信封的长度和宽度。如果信封A的长和宽都小于信封B，那么信封A可以放到信封B里，请求出信封最多可以嵌套多少层。
【要求】
时间复杂度为O(NlogN)
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::envelope_nest_problem {

class EnvelopeNestProblem {
public:
    static unsigned int nest_number(const std::vector<std::vector<unsigned int>>& envelopes);
    static unsigned int nest_number_time_opt(const std::vector<std::vector<unsigned int>>& envelopes);
};

}  // namespace coding_interview_guide::dynamic_programming::envelope_nest_problem

#endif
