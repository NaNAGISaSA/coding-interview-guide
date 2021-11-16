#include <limits>
#include <vector>

#include "09.other_problems/22.en_zh_cn_num.h"

namespace coding_interview_guide::other_problems::en_zh_cn_num {

namespace {
std::string digit1(int number) {
    static std::vector<std::string> vec{"一", "二", "三", "四", "五", "六", "七", "八", "九"};
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

std::string digit9_upper(int number) {
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
        return "负" + digit9_upper(num - last) + digit1(last + 1);
    }
    return num < 0 ? "负" + digit9_upper(-1 * num) : digit9_upper(num);
}

namespace {
std::string digit_1_19(int num) {
    static std::vector<std::string> vec{"One",
                                        "Two",
                                        "Three",
                                        "Four",
                                        "Five",
                                        "Six",
                                        "Seven",
                                        "Eight",
                                        "Nine",
                                        "Ten",
                                        "Eelven",
                                        "Twelve",
                                        "Thirteen",
                                        "Fourteen",
                                        "Fifteen",
                                        "Sixteen",
                                        "Seventeen",
                                        "Eighteen",
                                        "Nineteen"};
    return vec[num - 1];
}

std::string en_digit2(int num) {
    if (num < 20) {
        return digit_1_19(num);
    }
    static std::vector<std::string> vec{"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    std::string result = vec[-2 + num / 10];
    return num % 10 == 0 ? result : result + " " + digit_1_19(num % 10);
}

std::string en_digit3(int num) {
    if (num < 100) {
        return en_digit2(num);
    }
    std::string result = digit_1_19(num / 100) + " Hundred";
    return num % 100 == 0 ? result : result + " " + en_digit2(num % 100);
}
}  // namespace

std::string EnZhCnNum::num_to_en(int num) {
    if (num == 0) {
        return "Zero";
    }
    std::string result = num < 0 ? "Negative, " : "";
    if (num == std::numeric_limits<int>::min()) {
        result += "Two Billion, ";
        num = -1 * (num + 2'000'000'000);
    }
    if (num < 0) {
        num *= -1;
    }
    int start = 1'000'000'000;
    int index = 0;
    std::vector<std::string> vec{" Billion", " Million", " Thousand", ""};
    while (num != 0) {
        if (num < start) {
            start /= 1000;
            ++index;
            continue;
        }
        result = result + en_digit3(num / start) + vec[index++];
        num %= start;
        if (num != 0) {
            result += ", ";
        }
        start /= 1000;
    }
    return result;
}

}  // namespace coding_interview_guide::other_problems::en_zh_cn_num
