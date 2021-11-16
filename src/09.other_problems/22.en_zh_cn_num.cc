#include <limits>
#include <vector>

#include "09.other_problems/22.en_zh_cn_num.h"

namespace coding_interview_guide::other_problems::en_zh_cn_num {

namespace {
std::string digit1(int number) {
    std::vector<std::string> vec{"一", "二", "三", "四", "五", "六", "七", "八", "九"};
    return vec[number - 1];
}

std::string digit2(int number, bool has_hundred) {
    if (number < 10) {
        return digit1(number);
    }
    int high = number / 10, low = number % 10;
    if (high == 1 && !has_hundred) {
        return "十" + (low == 0 ? "" : digit1(low));
    } else {
        return digit1(high) + "十" + (low == 0 ? "" : digit1(low));
    }
}

std::string digit3(int number) {
    if (number < 100) {
        return digit2(number, false);
    }
    std::string result = digit1(number / 100) + "百";
    number %= 100;
    if (number / 10 == 0) {
        number %= 10;
        return number == 0 ? result : result + "零" + digit1(number);
    } else {
        return result + digit2(number, true);
    }
}

std::string digit4(int number) {
    if (number < 1000) {
        return digit3(number);
    }
    std::string result = digit1(number / 1000) + "千";
    number %= 1000;
    if (number == 0) {
        return result;
    } else if (number < 10) {
        return result + "零" + digit1(number);
    } else if (number < 100) {
        return result + "零" + digit2(number, true);
    } else {
        return result + digit3(number);
    }
}

std::string digit5to8(int number) {
    if (number < 10000) {
        return digit4(number);
    }
    std::string result = digit4(number / 10000) + "万";
    number %= 10000;
    if (number == 0) {
        return result;
    }
    return result + (number < 1000 ? "零" + digit3(number) : digit4(number));
}

std::string digit9upper(int number) {
    if (number < 100'000'000) {
        return digit5to8(number);
    }
    std::string result = digit4(number / 100'000'000) + "亿";
    number %= 100'000'000;
    if (number == 0) {
        return result;
    }
    return result + (number < 10'000'000 ? "零" + digit5to8(number) : digit5to8(number));
}
}  // namespace

std::string EnZhCnNum::num_to_zh_cn(int num) {
    if (num == 0) {
        return "零";
    }
    if (num == std::numeric_limits<int>::min()) {
        num = -1 * (num + 1);
        int last = num % 10;
        return "负" + digit9upper(num - last) + digit1(last + 1);
    }
    return num < 0 ? "负" + digit9upper(-1 * num) : digit9upper(num);
}

}  // namespace coding_interview_guide::other_problems::en_zh_cn_num
