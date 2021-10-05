#include "07.bitwise/06.find_one_count_num.h"

namespace coding_interview_guide::bitwise::find_one_count_num {

namespace {
void add_to_k_result(std::vector<unsigned int>& result, const std::vector<unsigned int>& k_num, unsigned int k) {
    for (size_t i = 0; i < result.size(); ++i) {
        result[i] = (result[i] + k_num[i]) % k;
    }
}

std::vector<unsigned int> convert_to_k_system(int num, const unsigned int k) {
    std::vector<unsigned int> result(32, 0U);
    size_t index = 0;
    while (num != 0) {
        result[index++] = num % k;
        num = num / k;
    }
    return result;
}

int revert_to_decimal(const std::vector<unsigned int>& k_result, const unsigned int k) {
    int result = 0, pow = 1;
    for (size_t i = 0; i < k_result.size(); ++i) {
        result += k_result[i] * pow;
        pow *= k;
    }
    return result;
}

}  // namespace

int FindOneCountNumber::find(const std::vector<int>& vec, unsigned int k) {
    std::vector<unsigned int> k_result(32, 0U);
    for (auto& num : vec) {
        add_to_k_result(k_result, convert_to_k_system(num, k), k);
    }
    return revert_to_decimal(k_result, k);
}

}  // namespace coding_interview_guide::bitwise::find_one_count_num
