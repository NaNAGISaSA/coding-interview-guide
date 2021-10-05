#ifndef _CODING_INTERVIEW_GUIDE_STRING_GET_PALINDROME_STR_H_
#define _CODING_INTERVIEW_GUIDE_STRING_GET_PALINDROME_STR_H_

/*
【题目】
给定一个字符串str，如果可以在str的任意位置添加字符，请返回在添加字符最少的情况下，让str整体都是回文字符串的一种结果。
【要求】
时间复杂度O（N^2），额外空间复杂度O（N^2）。
【补充】
给定一个字符串str，再给定str的最长回文子序列字符串strlps，请返回在添加字符最少的情况下，让str整体都是回文字符串的一种结果。
进阶问题比原问题多了一个参数，请做到时间复杂度比原问题的实现低。
*/

#include <string>

namespace coding_interview_guide::string::get_palindrome_str {

class AddMinCharToGetPalindromeStr {
public:
    static std::string get_palindrome_str(const std::string& str);
    static std::string get_palindrome_str_advanced(const std::string& str, const std::string& strlps);
};

}  // namespace coding_interview_guide::string::get_palindrome_str

#endif