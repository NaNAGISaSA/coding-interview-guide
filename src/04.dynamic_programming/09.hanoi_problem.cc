#include <iostream>
#include <string>

#include "04.dynamic_programming/09.hanoi_problem.h"

namespace coding_interview_guide::dynamic_programming::hanoi_problem {

namespace {
#define Println(message) std::cout << message << std::endl

const std::string left = "left";
const std::string middle = "mid";
const std::string right = "right";

void origin_problem_internal(unsigned int number,
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

}  // namespace coding_interview_guide::dynamic_programming::hanoi_problem
