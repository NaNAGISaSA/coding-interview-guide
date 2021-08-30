#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_HANOI_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_HANOI_PROBLEM_H_

/*
【题目】
给定一个整数n，代表汉诺塔游戏中从小到大放置n个圆盘，假设开始所有圆盘都在左边的柱子上，
那么用最优的办法把所有圆盘都移动到右边的柱子上的过程，就称为最优移动轨迹。按照汉诺塔游戏的要求把所有
圆盘都移动到右边的柱子上，实现函数打印最优移动轨迹。
【进阶】
给定一个整型数组arr, 其中只含有1、2和3,代表所有圆盘目前的状态，1代表左柱，2代表中柱，3代表右柱，
a[i]的值代表第i+1个圆盘的位置（a[i]下标从0开始）。
比如，arr=[3,3,2,1], 代表第1个圆盘在右柱上、第2个圆盘在右柱上、第3个圆盘在中柱上、第4个圆盘在左柱上。
如果arr代表的状态是最优移动轨迹过程中出现的状态，输出arr这种状态是最优移动轨迹中的第几个状态；
如果arr代表的状态不是最优移动轨迹过程中出现的状态，则输出-1。
【要求】
进阶问题实现时间复杂度为O(N)的方法。
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::hanoi_problem {

class HanoiProblem {
public:
    static void origin_problem(unsigned int n);
    static long advanced_problem(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::dynamic_programming::hanoi_problem

#endif
