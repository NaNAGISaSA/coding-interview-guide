#include <algorithm>

#include "04.dynamic_programming/08.envelope_nest_problem.h"

namespace coding_interview_guide::dynamic_programming::envelope_nest_problem {

unsigned int EnvelopeNestProblem::nest_number(const std::vector<std::vector<unsigned int>>& envelopes) {
    std::vector<unsigned int> dp_vec(envelopes.size(), 1);
    auto envelopes_copy = envelopes;
    std::sort(envelopes_copy.begin(), envelopes_copy.end(), [](const auto& a, const auto& b) {
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    });
    unsigned int max_nest = 0;
    for (size_t i = 1; i < envelopes_copy.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (envelopes_copy[j][1] < envelopes_copy[i][1] && dp_vec[j] >= dp_vec[i]) {
                dp_vec[i] = dp_vec[j] + 1;
            }
        }
        if (dp_vec[i] > max_nest) {
            max_nest = dp_vec[i];
        }
    }
    return max_nest;
}

unsigned int EnvelopeNestProblem::nest_number_time_opt(const std::vector<std::vector<unsigned int>>& envelopes) {
    auto envelopes_copy = envelopes;
    std::sort(envelopes_copy.begin(), envelopes_copy.end(), [](const auto& a, const auto& b) {
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    });
    unsigned int max_nest = 0;
    std::vector<unsigned int> minimun_ends(envelopes_copy.size(), 0);
    minimun_ends[0] = envelopes_copy[0][1];
    size_t ends_right = 0;
    for (size_t i = 1; i < envelopes_copy.size(); ++i) {
        size_t left = 0;
        size_t right = ends_right;
        while (left <= right) {
            size_t middle = (left + right) / 2;
            if (envelopes_copy[i][1] > minimun_ends[middle]) {
                left = middle + 1;
            } else {
                if (middle == 0) {
                    break;
                }
                right = middle - 1;
            }
        }
        minimun_ends[left] = envelopes_copy[i][1];
        ends_right = std::max(ends_right, left);
        max_nest = std::max(max_nest, static_cast<unsigned int>(left + 1));
    }
    return max_nest;
}

}  // namespace coding_interview_guide::dynamic_programming::envelope_nest_problem
