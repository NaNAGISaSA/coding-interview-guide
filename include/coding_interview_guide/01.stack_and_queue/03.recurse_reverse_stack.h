#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_RECURSE_REVERSE_STACK_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_RECURSE_REVERSE_STACK_H_

/*
【题目】
用递归函数和栈逆序一个栈。
*/

#include <stack>

namespace coding_interview_guide::stack_and_queue::recurse_reverse_stack {

template <typename T>
class RecurseReverseStack {
public:
    static void reverse_stack(std::stack<T>&);
};

}  // namespace coding_interview_guide::stack_and_queue::recurse_reverse_stack

#endif


