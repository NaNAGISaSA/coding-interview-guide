#include "04.dynamic_programming/06.balloon_game_max_point.h"

namespace coding_interview_guide::dynamic_programming::balloon_game_max_point {

namespace {
unsigned long max_point_internal(const std::vector<unsigned int>& vec, size_t start, size_t end) {
    if (start == end) {
        return vec[start - 1] * vec[start] * vec[end + 1];
    }
    unsigned long max = std::max(vec[start - 1] * vec[start] * vec[end + 1] + max_point_internal(vec, start + 1, end),
                                 vec[start - 1] * vec[end] * vec[end + 1] + max_point_internal(vec, start, end - 1));
    // i means the last balloon to break in current vec
    for (size_t i = start + 1; i < end; ++i) {
        max = std::max(max,
                       vec[start - 1] * vec[i] * vec[end + 1] + max_point_internal(vec, start, i - 1) +
                           max_point_internal(vec, i + 1, end));
    }
    return max;
}
}  // namespace

unsigned long BalloonGameMaxPoint::max_point(const std::vector<unsigned int>& vec) {
    if (vec.size() == 0) {
        return 0;
    } else if (vec.size() == 1) {
        return vec[0];
    } else {
        std::vector<unsigned int> vec_copy = vec;
        vec_copy.insert(vec_copy.begin(), 1);
        vec_copy.push_back(1);
        return max_point_internal(vec_copy, 1, vec.size());
    }
}

}  // namespace coding_interview_guide::dynamic_programming::balloon_game_max_point
