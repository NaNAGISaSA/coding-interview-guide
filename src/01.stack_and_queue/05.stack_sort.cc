#include "01.stack_and_queue/05.stack_sort.h"

namespace {
    template <typename T>
    static T find_min_number(std::stack<T>& stack) {
        T current_top = stack.top();
        stack.pop();
        if(!stack.size()){
            return current_top;
        }
        T current_min = find_min_number(stack);
        if(current_min > current_top){
            stack.push(std::move(current_min));
            return current_top;
        }else{
            stack.push(std::move(current_top));
            return current_min;
        }
    }
}

namespace coding_interview_guide::stack_and_queue::stack_sort {

template <typename T>
void SortStack<T>::sort_stack(std::stack<T>& stack) {
    std::stack<T> internal;
    while(stack.size()) {
        T min_number = find_min_number(stack);
        internal.push(std::move(min_number));
    }
    stack = std::move(internal);
}

template <typename T>
void SortStack<T>::sort_stack_demo(std::stack<T>& stack) {
    std::stack<T> internal;
    while(stack.size()){
        T& top = stack.top();
        stack.pop();
        while(internal.size() && internal.top() > top){
            T& internal_top = internal.top();
            stack.push(std::move(internal_top));
            internal.pop();
        }
        internal.push(std::move(top));
    }
    stack = std::move(internal);
}

template class SortStack<int>;

}  // namespace coding_interview_guide::stack_and_queue::stack_sort
