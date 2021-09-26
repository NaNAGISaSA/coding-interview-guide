#include <unordered_map>

#include "05.string/19.rotate_trans_str.h"

namespace coding_interview_guide::string::rotate_trans_str {

namespace {
bool is_rotate_trans_str_internal(const std::string& str1,
                                  size_t s1_begin,
                                  size_t s1_end,
                                  const std::string& str2,
                                  size_t s2_begin,
                                  size_t s2_end) {
    if (s1_begin == s1_end) {
        return str1[s1_begin] == str2[s2_begin];
    }

    for (size_t i = s1_begin; i < s1_end; ++i) {
        size_t size = i - s1_begin;
        if ((is_rotate_trans_str_internal(str1, s1_begin, i, str2, s2_begin, s2_begin + size) &&
             is_rotate_trans_str_internal(str1, i + 1, s1_end, str2, s2_begin + size + 1, s2_end)) ||
            (is_rotate_trans_str_internal(str1, s1_begin, i, str2, s2_end - size, s2_end) &&
             is_rotate_trans_str_internal(str1, i + 1, s1_end, str2, s2_begin, s2_end - size - 1))) {
            return true;
        }
    }
    return false;
}
}  // namespace

bool RotateTransStr::is_rotate_trans_str(const std::string& str1, const std::string& str2) {
    size_t str1_size = str1.size(), str2_size = str2.size();
    if (str1_size != str2_size || str1_size <= 1) {
        return false;
    }

    auto have_different_number_char = [&str1, &str2]() {
        std::unordered_map<char, long> map;
        for (const auto& character : str1) {
            if (map.find(character) == map.end()) {
                map[character] = 1L;
            } else {
                ++map[character];
            }
        }
        for (const auto& character : str2) {
            if (map.find(character) == map.end()) {
                return true;
            }
            if (--map[character] < 0L) {
                return true;
            }
        }
        return false;
    };

    if (have_different_number_char()) {
        return false;
    }

    return is_rotate_trans_str_internal(str1, 0, str1_size - 1, str2, 0, str2_size - 1);
}

}  // namespace coding_interview_guide::string::rotate_trans_str
