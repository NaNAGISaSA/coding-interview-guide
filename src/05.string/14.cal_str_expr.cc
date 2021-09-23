#include <deque>
#include <tuple>

#include "05.string/14.cal_str_expr.h"

namespace coding_interview_guide::string::cal_str_expr {

namespace {
void add_number_to_queue(std::deque<std::string>& queue, long number) {
    if (queue.size() && (queue.back() == "*" || queue.back() == "/")) {
        std::string oper = std::move(queue.back());
        queue.pop_back();
        long element = std::stol(queue.back());
        element = oper == "*" ? element * number : element / number;
        queue.back() = std::move(std::to_string(element));
    } else {
        queue.push_back(std::to_string(number));
    }
}

long calculate_with_queue(std::deque<std::string>& queue) {
    long result = 0L;
    bool sum = true;
    while (queue.size()) {
        std::string ele = std::move(queue.front());
        queue.pop_front();
        if (ele == "+") {
            sum = true;
        } else if (ele == "-") {
            sum = false;
        } else {
            result = sum ? result + std::stol(ele) : result - std::stol(ele);
        }
    }
    return result;
}

std::tuple<long, size_t> recurse_cal_str(const std::string& str, size_t start) {
    std::deque<std::string> queue;
    long number = 0L;
    size_t str_size = str.size();
    while (start < str_size && str[start] != ')') {
        if (str[start] >= '0' && str[start] <= '9') {
            number = 10L * number + str[start++] - '0';
        } else if (str[start] != '(') {
            add_number_to_queue(queue, number);
            queue.push_back(std::string(1, str[start++]));
            number = 0L;
        } else {
            auto&& [result, index] = recurse_cal_str(str, start + 1);
            number = result;
            start = index;
        }
    }
    add_number_to_queue(queue, number);
    return std::tuple<long, size_t>(calculate_with_queue(queue), start + 1);
}
}  // namespace

long CalStrExpr::get_result(const std::string& str) {
    return str.size() ? std::get<0>(recurse_cal_str(str, 0)) : 0L;
}

}  // namespace coding_interview_guide::string::cal_str_expr
