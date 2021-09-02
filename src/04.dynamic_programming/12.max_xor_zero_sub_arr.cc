#include <algorithm>
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
                    dp_vec[i] = std::max(dp_vec[i], 1 + (j == vec_size - 1 ? 0 : dp_vec[j + 1]));
                    break;
                }
            }
        }
    }
    return dp_vec[0];
}

}  // namespace coding_interview_guide::dynamic_programming::max_xor_zero_sub_arr
