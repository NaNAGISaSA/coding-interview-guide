#include <deque>

#include <01.stack_and_queue/07.gen_max_array_in_window.h>

namespace coding_interview_guide::stack_and_queue::gen_max_array_in_window {

std::vector<int> GenMaxArrayInWindow::get_max_array(const std::vector<int>& input, size_t window_length) {
    std::deque<size_t> index_queue;
    std::vector<int> result;
    for (size_t index = 0; index < input.size(); ++index) {
        if (index_queue.size() && index_queue.front() <= index - window_length) {
            index_queue.pop_front();
        }
        while (index_queue.size() && input[index_queue.back()] < input[index]) {
            index_queue.pop_back();
        }
        index_queue.push_back(index);
        if (index + 1 >= window_length) {
            result.push_back(input[index_queue.front()]);
        }
    }
    return result;
}

}  // namespace coding_interview_guide::stack_and_queue::gen_max_array_in_window