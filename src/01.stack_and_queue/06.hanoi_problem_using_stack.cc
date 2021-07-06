#include <stack>
#include <string>

#include "01.stack_and_queue/06.hanoi_problem_using_stack.h"

namespace {
static std::string left = "left";
static std::string middle = "mid";
static std::string right = "right";

static std::pair<int, std::string> recurse_move(int num, const std::string& from, const std::string& to) {
    if (num == 1) {
        if (from == middle || to == middle) {
            return {1, "Move 1 from " + from + " to " + to + "\n"};
        } else {
            return {2, "Move 1 from " + from + " to " + middle + "\nMove 1 from " + middle + " to " + to + "\n"};
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
            auto result2 = std::make_pair<int, std::string>(
                1, "Move " + std::to_string(num) + " from " + from + " to " + middle + "\n");
            auto result3 = recurse_move(num - 1, to, from);
            auto result4 = std::make_pair<int, std::string>(
                1, "Move " + std::to_string(num) + " from " + middle + " to " + to + "\n");
            auto result5 = recurse_move(num - 1, from, to);
            return {result1.first + result2.first + result3.first + result4.first + result5.first,
                    result1.second + result2.second + result3.second + result4.second + result5.second};
        }
    }
}

enum class Action { BEGIN, LM, MR, RM, ML };

Action choose_next_action(const std::stack<int>& left,
                          const std::stack<int>& middle,
                          const std::stack<int>& right,
                          int& step,
                          Action current_action) {
    step++;
    if (current_action == Action::BEGIN) {
        return Action::LM;
    } else {
        if (current_action == Action::LM || current_action == Action::ML) {
            if (middle.size() > 0 && right.size() > 0) {
                return middle.top() > right.top() ? Action::RM : Action::MR;
            } else if (middle.size() > 0) {
                return Action::MR;
            } else {
                return Action::RM;
            }
        } else {
            if (left.size() > 0 && middle.size() > 0) {
                return left.top() > middle.top() ? Action::ML : Action::LM;
            } else if (left.size() > 0) {
                return Action::LM;
            } else {
                return Action::ML;
            }
        }
    }
}

}  // namespace

namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack {

std::pair<int, std::string> HanoiProblem::recurse_method(int num) {
    return num < 1 ? std::make_pair<int, std::string>(-1, "") : recurse_move(num, left, right);
}

/*
根据游戏规则，只有四个动作：左→中，中→右，右→中，中→左
要想获得最小步数，非递归方法有以下核心结论：
1. 游戏第一个动作一定是左→中；
2. 根据相邻不可逆原则和小压大原则，四个动作中一定只有一个是可选的。
例如，上一步是中→左，那么这一步的分析如下：
  - 左→中没有意义（相邻不可逆）；
  - 中→左不可能（小压大）；
  - 中→右，右→中只能二选一（小压大）；
*/
int HanoiProblem::stack_method(int num) {
    if (num < 1) {
        return -1;
    }
    std::stack<int> left, middle, right;
    for (int i = 0; i < num; ++i) {
        left.push(num - i);
    }
    int step = 0;
    Action current_action = Action::BEGIN;
    while (right.size() != static_cast<size_t>(num)) {
        current_action = choose_next_action(left, middle, right, step, current_action);
        if (current_action == Action::LM) {
            middle.push(std::move(left.top()));
            left.pop();
        } else if (current_action == Action::ML) {
            left.push(std::move(middle.top()));
            middle.pop();
        } else if (current_action == Action::MR) {
            right.push(std::move(middle.top()));
            middle.pop();
        } else {
            middle.push(std::move(right.top()));
            right.pop();
        }
    }
    return step;
}

}  // namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack
