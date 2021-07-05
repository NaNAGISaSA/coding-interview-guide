#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_HANOI_PROBLEM_USING_STACK_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_HANOI_PROBLEM_USING_STACK_H_

/*
【题目】
汉诺塔问题比较经典，这里修改一下游戏规则：现在限制不能从最左侧的塔直接移动到最右侧，也不能从最右侧直接移动到最左侧，而是必须经过中间。
求当塔有n层的时候，打印最优移动过程和最优移动总步数。
【要求】
1. 使用递归方法解决；
2. 非递归方法，并使用栈来模拟三个塔。
*/

#include <string>
#include <utility>

namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack {

class HanoiProblem {
public:
    static std::pair<int, std::string> recurse_method(int num);
    static int stack_method(int num);
};

}  // namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack

#endif