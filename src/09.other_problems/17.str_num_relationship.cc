#include <cmath>
#include <unordered_map>

#include "09.other_problems/17.str_num_relationship.h"

namespace coding_interview_guide::other_problems::str_num_relationship {

// 伪K进制，需要注意的一点是每一位必须>=1，因此不能从高位直接进行除余操作
std::string StrNumRelationship::num_to_str(const std::vector<char>& vec, unsigned int num) {
    unsigned int vec_size = static_cast<unsigned int>(vec.size());
    if (vec_size == 0) {
        return "";
    }
    unsigned int str_num = 0, multi = 1;
    while (num >= multi) {
        ++str_num;
        num -= multi;
        multi *= vec_size;
    }
    std::string result(str_num, vec[0]);
    multi /= vec_size;
    unsigned int index = 0;
    while (num != 0) {
        if (num >= multi) {
            result[index] = vec[num / multi];
            num %= multi;
        }
        ++index;
        multi /= vec_size;
    }
    return result;
}

unsigned int StrNumRelationship::str_to_num(const std::vector<char>& vec, const std::string& str) {
    unsigned int vec_size = static_cast<unsigned int>(vec.size());
    if (vec_size == 0 || str.size() == 0) {
        return 0U;
    }
    std::unordered_map<char, unsigned int> map;
    unsigned int val = 1;
    for (unsigned int i = 0; i < vec_size; ++i) {
        map.insert(std::make_pair(vec[i], val++));
    }
    unsigned int result = 0;
    unsigned int multi = static_cast<unsigned int>(std::pow(vec_size, str.size() - 1));
    for (auto& character : str) {
        result += map[character] * multi;
        multi /= vec_size;
    }
    return result;
}

}  // namespace coding_interview_guide::other_problems::str_num_relationship
