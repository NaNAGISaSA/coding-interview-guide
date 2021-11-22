#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_OCCURRENCE_TOP_K_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_OCCURRENCE_TOP_K_H_

/*
【题目】
给定String类型的数组strArr，再给定整数k，请严格按照排名顺序打印出次数前k名的字符串。
【要求】
如果strArr长度为N，时间复杂度请达到O（Nlogk）；
*/

#include <string>
#include <vector>

namespace coding_interview_guide::other_problems::occurrence_top_k {

class OccurrenceTopK {
public:
    static void print_top_k(const std::vector<std::string>& vec, unsigned int k);
};

}  // namespace coding_interview_guide::other_problems::occurrence_top_k

#endif
