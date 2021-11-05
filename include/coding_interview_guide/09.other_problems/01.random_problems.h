#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_RANDOM_PROBLEMS_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_RANDOM_PROBLEMS_H_

/*
【题目】
给一个等概率随机产生1~5的随机函数random_one_to_five，除此之外，不能使用任何随机数机制。
请使用该函数设计一个等概率随机产生1~7的随机函数random_one_to_seven。
【补充】
给定一个以p概率产生0，以1-p概率产生1的随机函数random01p，除此之外，不能使用任何随机数机制。
请使用该函数设计一个等概率随机产生1~6的随机函数random_one_to_six。

【题目】
有一台机器按照自然数序列的方式吐球（1号球，2号球，3号球），有一个袋子，袋子最多只能够装下K个球，
除了这个袋子之外，没有更多的储存空间。设计一种选择方式，使得当机器吐出第N号球时（N>K），袋子中的
球个数是K个，同时保证从开始至当前所有球每一个被选入袋子的概率均为K/N。

【题目】
假设函数random等概率随机返回一个在[0, 1)范围上的数，那么我们知道，在[0, x)区间上的数出现的
概率为x(0 < x <= 1)。给定一个大于0的整数k，并且可以使用random函数，请实现一个函数依然返回
[0, 1)范围上的数，但是在[0, x)区间上的数出现的概率为x^k(0 < x <= 1)。
*/

#include <vector>

namespace coding_interview_guide::other_problems::random_problems {

class RandomProblems {
public:
    static int random_one_to_seven();
    static int random_one_to_six();
};

class ReservoirAlgorithm {
public:
    static std::vector<size_t> select(size_t k, size_t n);
};

class AdjustRandom {
public:
    static double get_number(unsigned int k);
};

}  // namespace coding_interview_guide::other_problems::random_problems

#endif
