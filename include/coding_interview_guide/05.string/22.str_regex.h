#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_STR_REGEX_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_STR_REGEX_H_

/*
【题目】
对于字符串str，其中绝对不含有字符’.’和‘*’。再给定字符串exp，其中可以含有’.’或’‘*’，’*’字符不能是exp的首字符，并且任意两个’*‘字符不相邻。
exp中的’.’代表任何一个字符，exp中的’*’表示’*‘的前一个字符可以有0个或者多个。
请写一个函数，判断str是否能被exp匹配(注意：输入的数据不保证合法，但只含小写字母和‘.’和‘*’)。
【要求】
时间复杂度O（N^2 * M），额外空间复杂度O（N^2）。
*/

#include <string>

namespace coding_interview_guide::string::str_regex {

class StrRegex {
public:
    static bool match(const std::string& str, const std::string& exp);
    static bool match_dp(const std::string& str, const std::string& exp);
};

}  // namespace coding_interview_guide::string::str_regex

#endif
