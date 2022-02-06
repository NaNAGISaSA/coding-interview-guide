#include <algorithm>
#include <unordered_map>

#include "05.string/17.max_non_repeat_substr.h"

namespace coding_interview_guide::string::max_non_repeat_substr {

unsigned long MaxNonRepeatSubstr::max_length(const std::string& str) {
    std::unordered_map<char, size_t> map;
    unsigned long result = 0L, start = 0L;
    for (size_t i = 0; i < str.size(); ++i) {
        if (map.find(str[i]) != map.end()) {
            start = std::max(map[str[i]] + 1, start);
        }
        map[str[i]] = i;
        result = std::max(result, i - start + 1);
    }
    return result;
}

}  // namespace coding_interview_guide::string::max_non_repeat_substr