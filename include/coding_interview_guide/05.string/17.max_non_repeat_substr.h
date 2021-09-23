#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_NON_REPEAT_SUBSTR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_NON_REPEAT_SUBSTR_H_

/*
【题目】
给定一个字符串，返回字符串的最长无重复子串的长度(无重复指的是所有字母都不相同)。
【要求】
时间复杂度O（N），额外空间复杂度O（字符串编码范围）。
*/

#include <string>

namespace coding_interview_guide::string::max_non_repeat_substr {

class MaxNonRepeatSubstr {
public:
    static unsigned long max_length(const std::string& str);
};

}  // namespace coding_interview_guide::string::max_non_repeat_substr

#endif
