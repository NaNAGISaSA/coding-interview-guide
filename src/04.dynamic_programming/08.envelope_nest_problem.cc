#include <algorithm>

#include "04.dynamic_programming/08.envelope_nest_problem.h"

namespace coding_interview_guide::dynamic_programming::envelope_nest_problem {

namespace {
void max_increase_sub_arr(std::vector<unsigned int>& dp_vec, const std::vector<std::vector<unsigned int>>& envelopes) {
    for (size_t i = 1; i < envelopes.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (envelopes[j][1] < envelopes[i][1] && dp_vec[j] >= dp_vec[i]) {
                dp_vec[i] = dp_vec[j] + 1;
            }
        }
    }
}
}  // namespace

unsigned int EnvelopeNestProblem::nest_number(const std::vector<std::vector<unsigned int>>& envelopes) {
    std::vector<unsigned int> dp_vec_width(envelopes.size(), 1);
    auto envelopes_copy = envelopes;
    std::sort(envelopes_copy.begin(), envelopes_copy.end(), [](const auto& a, const auto& b) {
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    });
    max_increase_sub_arr(dp_vec_width, envelopes_copy);
    unsigned int max_number = 0;
    for (size_t i = 0; i < envelopes_copy.size(); ++i) {
        if (dp_vec_width[i] > max_number) {
            max_number = dp_vec_width[i];
        }
    }
    return max_number;
}

// unsigned int EnvelopeNestProblem::nest_number_time_opt(const std::vector<std::vector<unsigned int>>& envelopes) {
// }

}  // namespace coding_interview_guide::dynamic_programming::envelope_nest_problem
