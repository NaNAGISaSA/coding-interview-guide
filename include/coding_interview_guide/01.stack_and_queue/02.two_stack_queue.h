#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_TWO_STACK_QUEUE_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_TWO_STACK_QUEUE_H_

/*
【题目】
用两个栈实现队列，支持队列的基本操作（add、poll、peek）。
*/

#include <stack>

namespace coding_interview_guide::stack_and_queue::two_stack_queue {

template <typename T>
class TwoStackQueue {
public:
    TwoStackQueue();

    void push(const T&);
    void push(T&&);

    void pop();

    // transfer_data is not a const operation
    // const T& front() const;
    T& front();

private:
    void transfer_data();

    std::stack<T> _stack;
    std::stack<T> _reverse_stack;
};

}  // namespace coding_interview_guide::stack_and_queue::two_stack_queue

#endif
