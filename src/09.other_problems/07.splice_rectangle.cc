#include <algorithm>
#include <limits>
#include <unordered_map>

#include "09.other_problems/07.splice_rectangle.h"

namespace coding_interview_guide::other_problems::splice_rectangle {

bool SpliceRectangle::can_splice(const std::vector<std::vector<int>>& regions) {
    std::unordered_map<int, std::unordered_map<int, unsigned int>> count_map;
    int left = 0, top = 0, right = 0, bottom = 0, area = 0;
    int min_left = std::numeric_limits<int>::max(), min_bottom = std::numeric_limits<int>::max();
    int max_right = std::numeric_limits<int>::min(), max_top = std::numeric_limits<int>::min();

    auto add_count = [&count_map](int lr, int p1, int p2) {
        if (count_map.find(lr) == count_map.end()) {
            count_map[lr][p1] = 1U;
            count_map[lr][p2] = 1U;
        } else {
            if (count_map[lr].find(p1) == count_map[lr].end()) {
                count_map[lr][p1] = 1U;
            } else {
                ++count_map[lr][p1];
            }
            if (count_map[lr].find(p2) == count_map[lr].end()) {
                count_map[lr][p2] = 1U;
            } else {
                ++count_map[lr][p2];
            }
        }
    };

    for (auto& vec : regions) {
        left = vec[0];
        bottom = vec[1];
        right = vec[2];
        top = vec[3];
        min_left = std::min(left, min_left);
        min_bottom = std::min(bottom, min_bottom);
        max_right = std::max(right, max_right);
        max_top = std::max(top, max_top);
        area += (top - bottom) * (right - left);
        add_count(left, top, bottom);
        add_count(right, top, bottom);
    }

    if ((max_top - min_bottom) * (max_right - min_left) != area) {
        return false;
    }

    auto judge_corner = [&count_map](int p1, int p2) {
        if (count_map[p1].find(p2) == count_map[p1].end() || count_map[p1][p2] != 1U) {
            return false;
        }
        ++count_map[p1][p2];
        return true;
    };

    if (!judge_corner(min_left, max_top) || !judge_corner(min_left, min_bottom) || !judge_corner(max_right, max_top) ||
        !judge_corner(max_right, min_bottom)) {
        return false;
    }
    for (auto&& [k, map] : count_map) {
        for (auto&& [kk, count] : map) {
            if (count % 2 != 0) {
                return false;
            }
        }
    }

    return true;
}

}  // namespace coding_interview_guide::other_problems::splice_rectangle
