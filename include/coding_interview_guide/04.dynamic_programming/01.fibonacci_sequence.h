#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_FIBONACCI_SEQUENCE_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_FIBONACCI_SEQUENCE_H_

/*
【题目】
给出一个整数 n，请输出斐波那契数列的第 n 项。
【补充问题1】
给出一个整数 n，代表台阶数，一次可以跨 2 个或者 1 个台阶，请输出有多少种走法。
【补充问题2】
假设农场中成熟的母牛每年只会生 1头小母牛，并且永远不会死。第一年农场中有一只成熟的母牛，从第二年开始，母牛开始生小母牛。
每只小母牛 3 年之后成熟又可以生小母牛。给定整数 n，求出 n 年后牛的数量。
【要求】
所有问题均实现时间复杂度为O(logN)的解法。
*/

namespace coding_interview_guide::dynamic_programming::fibonacci_problem {

class FibProblem {
public:
    static unsigned long fib_number(unsigned int index);
    static unsigned long fib_number_opt(unsigned int index);
};

class StepProblem {
public:
    static unsigned long situations(unsigned int step_number);
    static unsigned long situations_opt(unsigned int step_number);
};

}  // namespace coding_interview_guide::dynamic_programming::fibonacci_problem

#endif