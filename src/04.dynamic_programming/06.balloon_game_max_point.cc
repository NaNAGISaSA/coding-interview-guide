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
    }
    std::vector<unsigned int> vec_copy = vec;
    vec_copy.insert(vec_copy.begin(), 1);
    vec_copy.push_back(1);
    return max_point_internal(vec_copy, 1, vec.size());
}

unsigned long BalloonGameMaxPoint::max_point_dp(const std::vector<unsigned int>& vec) {
    size_t balloon_number = vec.size();
    if (balloon_number == 0) {
        return 0;
    } else if (balloon_number == 1) {
        return vec[0];
    }
    std::vector<unsigned int> vec_copy = vec;
    vec_copy.insert(vec_copy.begin(), 1);
    vec_copy.push_back(1);
    std::vector<std::vector<long>> dp_matrix(balloon_number + 2, std::vector<long>(balloon_number + 2, 0L));
    for (size_t i = 1; i <= balloon_number; ++i) {
        dp_matrix[i][i] = vec_copy[i - 1] * vec_copy[i] * vec_copy[i + 1];
    }
    for (size_t start = balloon_number - 1; start >= 1; --start) {
        for (size_t end = start + 1; end <= balloon_number; ++end) {
            dp_matrix[start][end] =
                std::max(vec_copy[start - 1] * vec_copy[start] * vec_copy[end + 1] + dp_matrix[start + 1][end],
                         vec_copy[start - 1] * vec_copy[end] * vec_copy[end + 1] + dp_matrix[start][end - 1]);
            for (size_t i = start + 1; i < end; ++i) {
                dp_matrix[start][end] = std::max(dp_matrix[start][end],
                                                 vec_copy[start - 1] * vec_copy[i] * vec_copy[end + 1] +
                                                     dp_matrix[start][i - 1] + dp_matrix[i + 1][end]);
            }
        }
    }
    return dp_matrix[1][balloon_number];
}

}  // namespace coding_interview_guide::dynamic_programming::balloon_game_max_point
