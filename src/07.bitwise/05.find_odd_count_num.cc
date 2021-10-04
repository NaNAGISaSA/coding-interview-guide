#include "07.bitwise/05.find_odd_count_num.h"

namespace coding_interview_guide::bitwise::find_odd_count_num {

int FindOddCountNumber::find_one(const std::vector<int>& vec) {
    int result = 0;
    for (auto& num : vec) {
        result ^= num;
    }
    return result;
}

std::tuple<int, int> FindOddCountNumber::find_two(const std::vector<int>& vec) {
    int result = 0;
    for (auto& num : vec) {
        result ^= num;
    }
    int right = result & (~result + 1);
    int num1 = 0;
    for (auto& num : vec) {
        if (num & right) {
            num1 ^= num;
        }
    }
    return std::tuple<int, int>(num1, result ^ num1);
}

}  // namespace coding_interview_guide::bitwise::find_odd_count_num
