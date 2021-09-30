#include <algorithm>
#include <limits>

#include "05.string/24.max_xor_value.h"

namespace coding_interview_guide::string::max_xor_value {

/*
异或和性质：如果c=a^b，则有b=a^c，a=c^b。
*/
int MaxXorValue::max_value(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (!vec_size) {
        return 0;
    }
    std::vector<int> xor_vec(vec_size, vec[0]);
    for (size_t i = 1; i < vec_size; ++i) {
        xor_vec[i] = xor_vec[i - 1] ^ vec[i];
    }
    int max_value = std::numeric_limits<int>::min();
    for (size_t i = 0; i < vec_size; ++i) {
        for (size_t j = 0; j <= i; ++j) {
            max_value = std::max(max_value, j == i ? xor_vec[i] : xor_vec[i] ^ xor_vec[j]);
        }
    }
    return max_value;
}

}  // namespace coding_interview_guide::string::max_xor_value
