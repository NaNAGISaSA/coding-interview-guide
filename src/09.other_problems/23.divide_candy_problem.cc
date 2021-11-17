#include "09.other_problems/23.divide_candy_problem.h"

namespace coding_interview_guide::other_problems::divide_candy_problem {

unsigned int DivideCandyProblem::min_candy_num1(const std::vector<unsigned int>& point) {
    unsigned int vec_size = static_cast<unsigned int>(point.size());
    if (vec_size == 0) {
        return 0U;
    }

    unsigned int result = 0U;

    auto add_right_slope = [&result](unsigned int begin, unsigned int end) {
        unsigned int ele_num = end - begin + 1;
        result = result + ele_num + ele_num * (ele_num - 1) / 2;
    };

    auto next_left_slope = [&point, &vec_size](unsigned int start) {
        for (unsigned int i = start; i < vec_size - 1; ++i) {
            if (point[i] <= point[i + 1]) {
                return i;
            }
        }
        return vec_size - 1;
    };

    unsigned int index = next_left_slope(0);
    add_right_slope(0, index++);

    unsigned int lbase = 1, next_left_start = 0;
    while (index < vec_size) {
        if (point[index] == point[index - 1]) {
            result += 1;
            ++index;
            lbase = 1;
        } else if (point[index] > point[index - 1]) {
            result += ++lbase;
            ++index;
        } else {
            next_left_start = next_left_slope(index);
            add_right_slope(index - 1, next_left_start);
            result -= (lbase > next_left_start - index + 2 ? next_left_start - index + 2 : lbase);
            index = next_left_start + 1;
            lbase = 1;
        }
    }
    return result;
}

unsigned int DivideCandyProblem::min_candy_num2(const std::vector<unsigned int>& point) {
    unsigned int vec_size = static_cast<unsigned int>(point.size());
    if (vec_size == 0) {
        return 0U;
    }

    unsigned int result = 0;

    auto next_left_slope = [&point, &vec_size](unsigned int start) {
        for (unsigned int i = start; i < vec_size - 1; ++i) {
            if (point[i] < point[i + 1]) {
                return i;
            }
        }
        return vec_size - 1;
    };

    auto add_right_slope = [&point, &result](long start, long end) {
        unsigned int base = 1;
        result += base;
        for (long i = end - 1; i >= start; --i) {
            if (point[i] == point[i + 1]) {
                result += base;
            } else {
                result += ++base;
            }
        }
        return base;
    };

    unsigned int index = next_left_slope(0);
    add_right_slope(0, index++);

    unsigned int lbase = 1, same = 1;
    unsigned int next_left_start = 0, right_slope_len = 0;
    while (index < vec_size) {
        if (point[index] == point[index - 1]) {
            result += lbase;
            ++same;
            ++index;
        } else if (point[index] > point[index - 1]) {
            result += ++lbase;
            same = 1;
            ++index;
        } else {
            next_left_start = next_left_slope(index);
            right_slope_len = add_right_slope(index - 1, next_left_start);
            if (lbase >= right_slope_len) {
                result -= right_slope_len;
            } else if (same == 1) {
                result -= lbase;
            } else {
                result = result + (right_slope_len - lbase) * same - right_slope_len;
            }
            index = next_left_start + 1;
            same = 1;
            lbase = 1;
        }
    }
    return result;
}

}  // namespace coding_interview_guide::other_problems::divide_candy_problem
