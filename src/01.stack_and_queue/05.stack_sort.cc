#include "01.stack_and_queue/05.stack_sort.h"

namespace {
int find_min_number(std::stack<int>& stack) {
    int current_top = stack.top();
    stack.pop();
    if (!stack.size()) {
        return current_top;
    }
    int current_min = find_min_number(stack);
    if (current_min > current_top) {
        stack.push(current_min);
        return current_top;
    } else {
        stack.push(current_top);
        return current_min;
    }
}
}  // namespace

namespace coding_interview_guide::stack_and_queue::stack_sort {

void SortStack::sort_stack(std::stack<int>& stack) {
    std::stack<int> internal;
    while (stack.size()) {
        internal.push(find_min_number(stack));
    }
    stack = std::move(internal);
}

void SortStack::sort_stack_opt(std::stack<int>& stack) {
    std::stack<int> internal;
    while (stack.size()) {
        int top = stack.top();
        stack.pop();
        while (internal.size() && internal.top() > top) {
            stack.push(internal.top());
            internal.pop();
        }
        internal.push(top);
    }
    stack = std::move(internal);
}

}  // namespace coding_interview_guide::stack_and_queue::stack_sort
