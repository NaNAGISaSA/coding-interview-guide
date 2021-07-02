#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_GET_MIN_STACK_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_GET_MIN_STACK_H_

/*
【题目】
实现一个特殊功能的栈，在实现栈的基本功能的基础上，再实现返回栈中最小元素的操作。
【要求】
1. pop，push，getMin的时间复杂度都是O(1)；
2. 设计栈时可使用现成的栈结构。
*/

#include <stack>

namespace coding_interview_guide::stack_and_queue::get_min_stack {

template <typename T>
class GetMinStack {
public:
    GetMinStack();

    void pop();

    void push(const T&);
    void push(T&&);

    const T& get_min() const;
    T& get_min();

private:
    std::stack<T> _data_stack;
    std::stack<T> _min_stack;
};

}  // namespace coding_interview_guide::stack_and_queue::get_min_stack

#endif
