#include <tuple>
#include <unordered_map>

#include "05.string/09.del_str_get_min_dict_order.h"

namespace coding_interview_guide::string::del_str_get_min_dict_order {

std::string GetMinDictOrderStr::process(const std::string& str) {
    if (str.size() == 0) {
        return str;
    }
    std::string result(""), left_process_str = str;
    std::unordered_map<char, size_t> map;

    auto count_char = [&map, &left_process_str]() {
        map.clear();
        for (auto& character : left_process_str) {
            if (map.find(character) != map.end()) {
                ++map[character];
            } else {
                map[character] = 1;
            }
        }
    };

    auto find_min_char = [&left_process_str, &result](size_t end) {
        char min_char = left_process_str[0];
        size_t min_index = 0;
        for (size_t i = 0; i <= end; ++i) {
            if (left_process_str[i] < min_char) {
                min_char = left_process_str[i];
                min_index = i;
            }
        }
        result.push_back(min_char);
        return std::tuple<char, size_t>(min_char, min_index);
    };

    auto delete_char_in_str = [&left_process_str](char del_char, size_t start) {
        for (auto it = std::next(left_process_str.begin(), start); it != left_process_str.end();) {
            if (*it == del_char) {
                it = left_process_str.erase(it);
            } else {
                ++it;
            }
        }
        left_process_str = std::move(left_process_str.substr(start));
    };

    while (left_process_str.size()) {
        count_char();
        for (size_t i = 0; i < left_process_str.size(); ++i) {
            if (--map[left_process_str[i]] == 0) {
                auto&& [min_char, min_index] = find_min_char(i);
                delete_char_in_str(min_char, min_index);
                break;
            }
        }
    }
    return result;
}

}  // namespace coding_interview_guide::string::del_str_get_min_dict_order