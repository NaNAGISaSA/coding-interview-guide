#include <algorithm>
#include <unordered_map>

#include "04.dynamic_programming/20.max_continuous_sequence.h"

namespace coding_interview_guide::dynamic_programming::max_continuous_sequence {

unsigned int MaxContinuousSequence::length(const std::vector<unsigned int>& vec) {
    std::unordered_map<unsigned int, unsigned int> map;
    unsigned int max_value = 1U;

    auto adjust_map = [&map](unsigned int left, unsigned int right) {
        unsigned int len = map[left] + map[right];
        map[left - map[left] + 1] = len;
        map[right + map[right] - 1] = len;
        return len;
    };

    for (auto& number : vec) {
        if (!map.count(number)) {
            map.insert({number, 1UL});
            if (map.count(number + 1)) {
                max_value = std::max(max_value, adjust_map(number, number + 1));
            }
            if (map.count(number - 1)) {
                max_value = std::max(max_value, adjust_map(number - 1, number));
            }
        }
    }
    return max_value;
}

}  // namespace coding_interview_guide::dynamic_programming::max_continuous_sequence
