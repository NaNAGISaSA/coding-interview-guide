#include <stack>
#include <string>

#include "01.stack_and_queue/06.hanoi_problem_using_stack.h"

namespace {
static std::string left = "left";
static std::string middle = "middle";
static std::string right = "right";

static std::pair<int, std::string> recurse_move(int num, const std::string& from, const std::string& to) {
    if (num == 1) {
        if (from == middle || to == middle) {
            return {1, "Move 1 from " + from + " to " + to + "\n"};
        } else {
            return {2, "Move 1 from " + from + " to mid\nMove 1 from mid to " + to + "\n"};
        }
    } else {
        if (from == middle || to == middle) {
            std::string other = (to == left || from == left) ? right : left;
            auto result1 = recurse_move(num - 1, from, other);
            auto result2 = std::make_pair<int, std::string>(
                1, "Move " + std::to_string(num) + " from " + from + " to " + to + "\n");
            auto result3 = recurse_move(num - 1, other, to);
            return {result1.first + result2.first + result3.first, result1.second + result2.second + result3.second};
        } else {
            auto result1 = recurse_move(num - 1, from, to);
            auto result2 =
                std::make_pair<int, std::string>(1, "Move " + std::to_string(num) + " from " + from + " to mid\n");
            auto result3 = recurse_move(num - 1, to, from);
            auto result4 =
                std::make_pair<int, std::string>(1, "Move " + std::to_string(num) + " from mid to " + to + "\n");
            auto result5 = recurse_move(num - 1, from, to);
            return {result1.first + result2.first + result3.first + result4.first + result5.first,
                    result1.second + result2.second + result3.second + result4.second + result5.second};
        }
    }
}
}  // namespace

namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack {

std::pair<int, std::string> HanoiProblem::recurse_method(int num) {
    return num < 1 ? std::make_pair<int, std::string>(-1, "") : recurse_move(num, left, right);
}

int HanoiProblem::stack_method(int) {
    return -1;
}

}  // namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack
