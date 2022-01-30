#ifndef _CODING_INTERVIEW_GUIDE_STRING_STATISTICS_STR_H_
#define _CODING_INTERVIEW_GUIDE_STRING_STATISTICS_STR_H_

/*
【题目】
给定一个字符串str，返回str的统计字符串。例如“aaabbacccd”的统计字符串为“a_3_b_2_a_1_c_3_d_1”。
【补充问题】
给定一个统计字符串以及一个整数index，返回原字符串上该整数对应的字符。
*/

#include <string>

namespace coding_interview_guide::string::statistics_str {

class StatisticsStr {
public:
    static std::string convert(const std::string& str);
    static char revert(const std::string& str, size_t index);
};

}  // namespace coding_interview_guide::string::statistics_str

#endif