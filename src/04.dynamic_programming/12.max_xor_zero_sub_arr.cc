#include <algorithm>
#include <unordered_map>
#include <vector>

#include "04.dynamic_programming/12.max_xor_zero_sub_arr.h"

namespace coding_interview_guide::dynamic_programming::max_xor_zero_sub_arr {

unsigned int MaxXorZeroSubArr::max_number(const std::vector<int>& vec) {
    long vec_size = vec.size();
    if (vec_size == 0) {
        return 0;
    } else if (vec_size == 1) {
        return vec[0] == 0 ? 1U : 0U;
    }
    std::vector<unsigned int> dp_vec(vec_size, 0U);
    dp_vec[vec_size - 1] = vec[vec_size - 1] == 0 ? 1U : 0U;
    for (long i = vec_size - 2; i >= 0; --i) {
        dp_vec[i] = dp_vec[i + 1];
        int number = vec[i];
        if (number == 0) {
            dp_vec[i] = 1 + dp_vec[i + 1];
        } else {
            for (long j = i + 1; j < vec_size; ++j) {
                number = number ^ vec[j];
                if (number == 0) {
                    dp_vec[i] = std::max(dp_vec[i], j == vec_size - 1 ? 1 : 1 + dp_vec[j + 1]);
                    break;
                }
            }
        }
    }
    return dp_vec[0];
}

unsigned int MaxXorZeroSubArr::max_number_opt(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0;
    }
    std::vector<unsigned int> dp_vec(vec_size, 0U);
    std::unordered_map<int, long> record{{0, -1}};
    int xor_result = 0;
    for (size_t i = 0; i < vec_size; ++i) {
        xor_result ^= vec[i];
        dp_vec[i] = i == 0 ? 0 : dp_vec[i - 1];
        if (record.find(xor_result) != record.end()) {
            dp_vec[i] = std::max(dp_vec[i], record[xor_result] == -1 ? 1 : 1 + dp_vec[record[xor_result]]);
        }
        record[xor_result] = i;
    }
    return dp_vec[vec_size - 1];
}

}  // namespace coding_interview_guide::dynamic_programming::max_xor_zero_sub_arr
