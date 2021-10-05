#ifndef _CODING_INTERVIEW_GUIDE_STRING_IS_CHANGED_WORD_H_
#define _CODING_INTERVIEW_GUIDE_STRING_IS_CHANGED_WORD_H_

/*
【题目】
给定两个字符串str1和str2，如果str1和str2中出现的字符种类出现的一样且每种字符出现的次数也一样，那么str1和str2互为变形词。
请判断str1和str2是否为变形词。
*/

#include <string>

namespace coding_interview_guide::string::is_changed_word {

class IsChangedWord {
public:
    static bool is_changed_word(const std::string& str1, const std::string& str2);
};

}  // namespace coding_interview_guide::string::is_changed_word

#endif