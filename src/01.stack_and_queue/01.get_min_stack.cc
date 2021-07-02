#include "01.stack_and_queue/01.get_min_stack.h"
#include <utility>

namespace coding_interview_guide::stack_and_queue::get_min_stack {

template <typename T>
GetMinStack<T>::GetMinStack() = default;

template <typename T>
void GetMinStack<T>::pop() {
    _data_stack.pop();
    _min_stack.pop();
}

template <typename T>
void GetMinStack<T>::push(const T& ele) {
    T min = ele;
    if (_min_stack.size() && _min_stack.top() < ele) {
        min = _min_stack.top();
    }
    _data_stack.push(ele);
    _min_stack.push(std::move(min));
}

template <typename T>
void GetMinStack<T>::push(T&& ele) {
    T min = ele;
    if (_min_stack.size() && _min_stack.top() < ele) {
        min = _min_stack.top();
    }
    _data_stack.push(ele);
    _min_stack.push(std::move(min));
}

template <typename T>
const T& GetMinStack<T>::get_min() const {
    return _min_stack.top();
}

template <typename T>
T& GetMinStack<T>::get_min() {
    return _min_stack.top();
}

template class GetMinStack<int>;

}  // namespace coding_interview_guide::stack_and_queue::get_min_stack
