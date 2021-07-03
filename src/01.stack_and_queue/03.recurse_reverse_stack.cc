#include "01.stack_and_queue/03.recurse_reverse_stack.h"

namespace {
    template <typename T>
    static T get_and_remove_last_element(std::stack<T>& stack) {
        if(stack.size() == 1){
            T& result = stack.top();
            stack.pop();
        return result;

        }else{
            T& top = stack.top();
            stack.pop();
            T result =  get_and_remove_last_element(stack);
            stack.push(std::move(top));
        return result;
        }
    }
}

namespace coding_interview_guide::stack_and_queue::recurse_reverse_stack {

template <typename T>
void RecurseReverseStack<T>::reverse_stack(std::stack<T>& stack) {
    if(stack.size() == 0 || stack.size() == 1){
        return;
    }
    T last = get_and_remove_last_element<T>(stack);
    reverse_stack(stack);
    stack.push(std::move(last));
}

template class RecurseReverseStack<int>;

}  // namespace coding_interview_guide::stack_and_queue::recurse_reverse_stack
