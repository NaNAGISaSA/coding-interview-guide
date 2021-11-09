#include <cmath>
#include <unordered_map>

#include "09.other_problems/17.str_num_relationship.h"

namespace coding_interview_guide::other_problems::str_num_relationship {

// std::string StrNumRelationship::num_to_str(const std::vector<char>& vec, unsigned int num) {
// }

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
