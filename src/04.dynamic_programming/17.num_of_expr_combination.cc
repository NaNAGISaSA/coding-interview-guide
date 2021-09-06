#include "04.dynamic_programming/17.num_of_expr_combination.h"

namespace coding_interview_guide::dynamic_programming::num_of_expr_combination {

namespace {
unsigned long number_recurse(const std::string& input, const size_t begin, const size_t end, bool desired) {
    if (begin == end) {
        return desired ? (input[begin] == '1' ? 1UL : 0UL) : (input[begin] == '0' ? 1UL : 0UL);
    }
    unsigned long result = 0UL;
    if (desired) {
        for (size_t i = begin; i < end; i = i + 2) {
            if (input[i + 1] == '&') {
                result += number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, true);
            } else if (input[i + 1] == '|') {
                result += number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, true) +
                          number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, false) +
                          number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, true);
            } else {
                result += number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, false) +
                          number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, true);
            }
        }
    } else {
        for (size_t i = begin; i < end; i = i + 2) {
            if (input[i + 1] == '&') {
                result += number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, false) +
                          number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, false) +
                          number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, true);
            } else if (input[i + 1] == '|') {
                result += number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, false);
            } else {
                result += number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, true) +
                          number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, false);
            }
        }
    }
    return result;
}
}  // namespace

unsigned long NumOfExprCombination::number(const std::string& input, bool desired) {
    return input.size() == 0 ? 0UL : number_recurse(input, 0, input.size() - 1, desired);
}

}  // namespace coding_interview_guide::dynamic_programming::num_of_expr_combination