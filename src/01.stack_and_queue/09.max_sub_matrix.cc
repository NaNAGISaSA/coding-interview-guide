#include <stack>

#include "01.stack_and_queue/09.max_sub_matrix.h"

namespace {
size_t get_current_line_max_region(const std::vector<int>& input) {
    std::stack<size_t> monotone_stack;
    size_t max_value = 0;

    auto calculate_current_region = [&monotone_stack, &max_value, &input](size_t index) {
        size_t current_region = 0;
        size_t& pop_top = monotone_stack.top();
        monotone_stack.pop();
        current_region = monotone_stack.size() ? (index - monotone_stack.top() - 1) * input[pop_top] :
                                                 (index - (-1) - 1) * input[pop_top];
        if (current_region > pop_top) {
            max_value = current_region;
        }
    };

    for (size_t i = 0; i < input.size(); ++i) {
        // 注意这里使用了小于等于，在等于时，在计算被pop出的面积时是错误的，但是由于size(pop_index, to_be_add_index)
        //     == size(to_be_add_index, pop_index)，因此在计算被加入的index的面积时，也同时会得到pop_index的正确的结果
        while (monotone_stack.size() && input[i] <= input[monotone_stack.top()]) {
            calculate_current_region(i);
        }
        monotone_stack.push(i);
    }
    while (monotone_stack.size()) {
        calculate_current_region(input.size());
    }

    return max_value;
}
}  // namespace

namespace coding_interview_guide::stack_and_queue::max_sub_matrix {

size_t MaxSubMatrix::max_sub_matirx(const std::vector<std::vector<int>>& input) {
    std::vector<int> internal_vec(input[0].size(), 0);
    size_t max_region = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        for (size_t j = 0; j < input[i].size(); ++j) {
            internal_vec[j] = input[i][j] == 0 ? 0 : internal_vec[j] + 1;
        }
        size_t current_line_max_region = get_current_line_max_region(internal_vec);
        if (current_line_max_region > max_region) {
            max_region = current_line_max_region;
        }
    }
    return max_region;
}

}  // namespace coding_interview_guide::stack_and_queue::max_sub_matrix