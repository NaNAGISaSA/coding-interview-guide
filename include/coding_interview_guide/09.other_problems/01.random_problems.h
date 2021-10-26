#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_RANDOM_PROBLEMS_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_RANDOM_PROBLEMS_H_

/*
【题目】
给一个等概率随机产生1~5的随机函数random_one_to_five，除此之外，不能使用任何随机数机制。
请使用该函数设计一个等概率随机产生1~7的随机函数random_one_to_seven。
【补充】
给定一个以p概率产生0，以1-p概率产生1的随机函数random01p，除此之外，不能使用任何随机数机制。
请使用该函数设计一个等概率随机产生1~6的随机函数random_one_to_six。
【进阶】
给定一个等概率随机产生1~m的随机函数random_one_to_m(int m)，除此之外，不能使用任何随机数机制。
有两个输入参数m，n，请用random_one_to_m(m)实现一个等概率随机产生1~n的随机函数random_one_to_n。
*/

namespace coding_interview_guide::other_problems::random_problems {

class RandomProblems {
public:
    static int random_one_to_seven();
    static int random_one_to_six();
};

}  // namespace coding_interview_guide::other_problems::random_problems

#endif
