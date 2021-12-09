#include <iostream>
#include <stack>
#include <string>

#include "01.stack_and_queue/06.hanoi_problem_using_stack.h"

namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack {

namespace {

#define Println(message) std::cout << message << std::endl

const std::string left = "left";
const std::string middle = "mid";
const std::string right = "right";

int recurse_move(int num, const std::string& from, const std::string& to) {
    if (num == 1) {
        if (from == middle || to == middle) {
            Println("Move 1 from " + from + " to " + to);
            return 1;
        } else {
            Println("Move 1 from " + from + " to " + middle);
            Println("Move 1 from " + middle + " to " + to);
            return 2;
        }
    } else {
        if (from == middle || to == middle) {
            std::string other = (to == left || from == left) ? right : left;
            auto result1 = recurse_move(num - 1, from, other);
            Println("Move " + std::to_string(num) + " from " + from + " to " + to);
            auto result2 = recurse_move(num - 1, other, to);
            return result1 + 1 + result2;
        } else {
            auto result1 = recurse_move(num - 1, from, to);
            Println("Move " + std::to_string(num) + " from " + from + " to " + middle);
            auto result2 = recurse_move(num - 1, to, from);
            Println("Move " + std::to_string(num) + " from " + middle + " to " + to);
            auto result3 = recurse_move(num - 1, from, to);
            return result1 + 1 + result2 + 1 + result3;
        }
    }
}
}  // namespace

int HanoiProblem::recurse_method(int num) {
    return num < 1 ? -1 : recurse_move(num, left, right);
}

namespace {
enum class Action { BEGIN, LM, MR, RM, ML };

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
Action choose_next_action(const std::stack<int>& left,
                          const std::stack<int>& middle,
                          const std::stack<int>& right,
                          Action current_action) {
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
        current_action = choose_next_action(left, middle, right, current_action);
        ++step;
        if (current_action == Action::LM) {
            middle.push(left.top());
            left.pop();
        } else if (current_action == Action::ML) {
            left.push(middle.top());
            middle.pop();
        } else if (current_action == Action::MR) {
            right.push(middle.top());
            middle.pop();
        } else {
            middle.push(right.top());
            right.pop();
        }
    }
    return step;
}

}  // namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack
