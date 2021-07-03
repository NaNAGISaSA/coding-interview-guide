#include "01.stack_and_queue/02.two_stack_queue.h"

namespace coding_interview_guide::stack_and_queue::two_stack_queue {

template <typename T>
TwoStackQueue<T>::TwoStackQueue() = default;

template <typename T>
void TwoStackQueue<T>::push(const T& ele) {
    _stack.push(ele);
    transfer_data();
}

template <typename T>
void TwoStackQueue<T>::push(T&& ele) {
    _stack.push(std::move(ele));
    transfer_data();
}

// IMPORTANT: transfer data first, and then pop
template <typename T>
void TwoStackQueue<T>::pop() {
    transfer_data();
    _reverse_stack.pop();
}

// IMPORTANT: transfer data first, and then get front
template <typename T>
T& TwoStackQueue<T>::front() {
    transfer_data();
    return _reverse_stack.top();
}

template <typename T>
void TwoStackQueue<T>::transfer_data() {
    if(!_reverse_stack.size()){
        while(_stack.size()){
            _reverse_stack.push(std::move(_stack.top()));
            _stack.pop();
        }
    }
}

template class TwoStackQueue<int>;

}  // namespace coding_interview_guide::stack_and_queue::two_stack_queue
