#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_FACTORIAL_PROBLEMS_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_FACTORIAL_PROBLEMS_H_

/*
【题目】
给定一个正整数N，返回N!结果的末尾为0的数量。
【补充】
给定一个正整数N，如果用二进制数表达N!的结果，返回最低位的1在哪个位置上，认为最右的位置为位置0。
*/

namespace coding_interview_guide::other_problems::factorial_problems {

class FactorialProblems {
public:
    static unsigned int zero_number(unsigned int number);
    static unsigned int binary_number(unsigned int number);
    static unsigned int binary_number_opt(unsigned int number);
};

}  // namespace coding_interview_guide::other_problems::factorial_problems

#endif
