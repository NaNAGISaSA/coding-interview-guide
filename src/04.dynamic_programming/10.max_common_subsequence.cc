#include "04.dynamic_programming/10.max_common_subsequence.h"

namespace coding_interview_guide::dynamic_programming::max_common_subsequence {

namespace {
std::string subsequence_internal(const std::string& a,
                                 size_t start_a,
                                 size_t end_a,
                                 const std::string& b,
                                 size_t start_b,
                                 size_t end_b) {
    if (start_a > end_a || start_b > end_b) {
        return "";
    }
    std::string max_string = "";
    for (size_t index = start_a; index <= end_a; ++index) {
        std::string temp(1, a[index]);
        size_t first = b.find_first_of(temp, start_b);
        if (first <= end_b) {
            temp += subsequence_internal(a, index + 1, end_a, b, first + 1, end_b);
            if (temp.size() > max_string.size()) {
                max_string = temp;
            }
        }
    }
    return max_string;
}
}  // namespace

std::string MaxCommonSubsequence::subsequence(const std::string& a, const std::string& b) {
    if (a.size() == 0 || b.size() == 0) {
        return "";
    }
    return subsequence_internal(a, 0, a.size() - 1, b, 0, b.size() - 1);
}

}  // namespace coding_interview_guide::dynamic_programming::max_common_subsequence
