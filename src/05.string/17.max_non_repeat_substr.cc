#include <unordered_map>

#include "05.string/17.max_non_repeat_substr.h"

namespace coding_interview_guide::string::max_non_repeat_substr {

unsigned long MaxNonRepeatSubstr::max_length(const std::string& str) {
    std::unordered_map<char, size_t> map;
    unsigned long result = 0L, current = 0L;
    for (size_t i = 0; i < str.size(); ++i) {
        if (map.find(str[i]) == map.end()) {
            ++current;
        } else {
            if (i - map[str[i]] > current) {
                current++;
            } else {
                current = i - map[str[i]];
            }
        }
        map[str[i]] = i;
        if (current > result) {
            result = current;
        }
    }
    return result;
}

}  // namespace coding_interview_guide::string::max_non_repeat_substr