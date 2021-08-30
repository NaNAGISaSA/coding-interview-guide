#include <iostream>
#include <string>

#include "04.dynamic_programming/09.hanoi_problem.h"

namespace coding_interview_guide::dynamic_programming::hanoi_problem {

namespace {
#define Println(message) std::cout << message << std::endl

const std::string left = "left";
const std::string middle = "mid";
const std::string right = "right";

void origin_problem_internal(const unsigned int number,
                             const std::string& from,
                             const std::string& mid,
                             const std::string& to) {
    if (number == 1) {
        Println("move from " + from + " to " + to);
        return;
    }
    origin_problem_internal(number - 1, from, to, mid);
    origin_problem_internal(1, from, mid, to);
    origin_problem_internal(number - 1, mid, from, to);
}
}  // namespace

void HanoiProblem::origin_problem(unsigned int n) {
    if (n == 0) {
        return;
    }
    origin_problem_internal(n, left, middle, right);
}

namespace {
const unsigned int left_integer = 1;
const unsigned int middle_integer = 2;
const unsigned int right_integer = 3;

long advanced_problem_internal(const std::vector<unsigned int>& vec,
                               const size_t index,
                               const unsigned int from,
                               const unsigned int mid,
                               const unsigned int to) {
    if (vec[index] == from) {
        return index == 0 ? 0 : advanced_problem_internal(vec, index - 1, from, to, mid);
    } else if (vec[index] == to) {
        long current_step = (1 << index);
        return index == 0 ? current_step : current_step + advanced_problem_internal(vec, index - 1, mid, from, to);
    } else {
        return -1;
    }
}
}  // namespace

long HanoiProblem::advanced_problem(const std::vector<unsigned int>& vec) {
    if (vec.size() == 0) {
        return -1;
    }
    return advanced_problem_internal(vec, vec.size() - 1, left_integer, middle_integer, right_integer);
}

}  // namespace coding_interview_guide::dynamic_programming::hanoi_problem
