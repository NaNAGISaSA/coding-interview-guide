#include <algorithm>

#include "05.string/16.min_concat_str.h"

namespace coding_interview_guide::string::min_concat_str {

std::string MinConcatStr::min_str(std::vector<std::string>& vec) {
    // Greedy Algorithm: ab < ba, bc < cb -> ac < ca
    std::sort(vec.begin(), vec.end(), [](const std::string& a, const std::string& b) { return (a + b) < (b + a); });
    std::string result("");
    for (auto& str : vec) {
        result += std::move(str);
    }
    return result;
}

}  // namespace coding_interview_guide::string::min_concat_str
