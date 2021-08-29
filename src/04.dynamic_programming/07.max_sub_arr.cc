#include "04.dynamic_programming/07.max_sub_arr.h"

namespace coding_interview_guide::dynamic_programming::max_sub_arr {

namespace {
std::vector<unsigned int> get_result_from_dp_vector(const std::vector<unsigned int>& dp_vector,
                                                    const std::vector<unsigned int>& vec,
                                                    size_t max_index) {
    std::vector<unsigned int> result(dp_vector[max_index], 0);
    unsigned int max_len = dp_vector[max_index];
    for (size_t index = max_index; index != 0; --index) {
        if (vec[index] <= vec[max_index] && max_len == dp_vector[index]) {
            result[max_len - 1] = vec[index];
            --max_len;
        }
    }
    if (max_len == 1) {
        result[0] = vec[0];
        return result;
    }
    return result;
}
}  // namespace

std::vector<unsigned int> MaxSubArr::arr(const std::vector<unsigned int>& vec) {
    std::vector<unsigned int> number(vec.size(), 1);
    size_t max_index = 0;
    for (size_t i = 1; i < vec.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (vec[j] < vec[i] && number[i] <= number[j]) {
                number[i] = number[j] + 1;
            }
        }
        if (number[i] >= number[max_index]) {
            max_index = i;
        }
    }
    return get_result_from_dp_vector(number, vec, max_index);
}

std::vector<unsigned int> MaxSubArr::arr_time_opt(const std::vector<unsigned int>& vec) {
    return vec;
}

}  // namespace coding_interview_guide::dynamic_programming::max_sub_arr
