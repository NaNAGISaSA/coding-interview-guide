#include <algorithm>
#include <limits>

#include "05.string/10.two_str_min_distance.h"

namespace coding_interview_guide::string::two_str_min_distance {

long TwoStrMinDistance::min_distance(const std::vector<std::string>& vec,
                                     const std::string& str1,
                                     const std::string& str2) {
    if (str1.size() == 0 || str2.size() == 0) {
        return -1;
    }
    long str1_index = -1, str2_index = -1, result = std::numeric_limits<long>::max();
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == str1) {
            str1_index = i;
            if (str2_index != -1) {
                result = std::min(result, str1_index - str2_index);
            }
        }
        if (vec[i] == str2) {
            str2_index = i;
            if (str1_index != -1) {
                result = std::min(result, str2_index - str1_index);
            }
        }
    }
    if (str1 == str2 && str1_index != -1) {
        return 0;
    } else {
        return result == std::numeric_limits<long>::max() ? -1 : result;
    }
}

}  // namespace coding_interview_guide::string::two_str_min_distance