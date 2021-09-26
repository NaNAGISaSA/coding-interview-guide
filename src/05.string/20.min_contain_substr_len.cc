#include <algorithm>
#include <limits>
#include <unordered_map>

#include "05.string/20.min_contain_substr_len.h"

namespace coding_interview_guide::string::min_contain_substr_len {

unsigned long MinContainSubstrLen::min_len(const std::string& str1, const std::string& str2) {
    std::unordered_map<char, long> map;
    for (const auto& character : str2) {
        if (map.find(character) == map.end()) {
            map[character] = 1L;
        } else {
            ++map[character];
        }
    }
    size_t left = 0, right = 0, remain_char_number = str2.size();
    unsigned long min_len = std::numeric_limits<unsigned int>::max();
    for (size_t i = 0; i < str1.size(); ++i) {
        if (map.find(str1[i]) == map.end()) {
            continue;
        }
        --map[str1[i]];
        right = i;
        if (map[str1[i]] >= 0) {
            --remain_char_number;
        }
        if (remain_char_number == 0) {
            for (size_t j = left; j < right; ++j) {
                if (map.find(str1[j]) != map.end() && ++map[str1[j]] > 0) {
                    ++remain_char_number;
                    left = j + 1;
                    min_len = std::min(min_len, static_cast<unsigned long>(right - j + 1));
                    break;
                }
            }
        }
    }
    return min_len == std::numeric_limits<unsigned int>::max() ? 0L : min_len;
}

}  // namespace coding_interview_guide::string::min_contain_substr_len
