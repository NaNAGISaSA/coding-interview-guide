#include <stack>
#include <utility>

#include "01.stack_and_queue/08.monotone_stack.h"

namespace coding_interview_guide::stack_and_queue::monotone_stack {

std::vector<std::vector<int>> MonotoneStack::get_near_less_no_repeat(const std::vector<int>& input) {
    std::stack<size_t> index_stack;
    std::vector<std::vector<int>> result(input.size(), {-1, -1});
    for (size_t i = 0; i < input.size(); ++i) {
        while (index_stack.size() && input[i] < input[index_stack.top()]) {
            size_t pop_index = index_stack.top();
            index_stack.pop();
            if (index_stack.size()) {
                result[pop_index] = {static_cast<int>(index_stack.top()), static_cast<int>(i)};
            } else {
                result[pop_index] = {-1, static_cast<int>(i)};
            }
        }
        index_stack.push(i);
    }
    while (index_stack.size()) {
        size_t pop_index = index_stack.top();
        index_stack.pop();
        if (index_stack.size()) {
            result[pop_index] = {static_cast<int>(index_stack.top()), -1};
        } else {
            result[pop_index] = {-1, -1};
        }
    }
    return result;
}

std::vector<std::vector<int>> MonotoneStack::get_near_less_with_repeat(const std::vector<int>& input) {
    std::stack<std::vector<size_t>> monotone_stack;
    std::vector<std::vector<int>> result(input.size(), {-1, -1});

    auto reorder_monotone_stack = [&monotone_stack, &result](int index){
            auto pop_top = std::move(monotone_stack.top());
            monotone_stack.pop();
            int left_value = monotone_stack.size() ? static_cast<int>(monotone_stack.top()[monotone_stack.top().size() - 1]) : -1;
            for(auto& element : pop_top){
                result[element] = {left_value, index};
            }
    };

    for(size_t i = 0; i < input.size(); ++i){
        while(monotone_stack.size() && input[monotone_stack.top()[0]] > input[i]){
            reorder_monotone_stack(static_cast<int>(i));
        }
        if(monotone_stack.size() && input[monotone_stack.top()[0]] == input[i]){
            monotone_stack.top().push_back(i);
        }else{
            monotone_stack.push({i});
        }
    }
    while(monotone_stack.size()){
        reorder_monotone_stack(-1);
    }
    return result;
}

}  // namespace coding_interview_guide::stack_and_queue::monotone_stack