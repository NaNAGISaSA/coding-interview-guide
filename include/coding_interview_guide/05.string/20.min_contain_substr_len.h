#ifndef _CODING_INTERVIEW_GUIDE_STRING_MIN_CONTAIN_SUBSTR_LEN_H_
#define _CODING_INTERVIEW_GUIDE_STRING_MIN_CONTAIN_SUBSTR_LEN_H_

/*
【题目】
给定字符串str1和str2，求str1的子串中含有str2所有字符的最小字符串长度（不要求顺序一致）。
【要求】
时间复杂度O（N）。
*/

#include <string>

namespace coding_interview_guide::string::min_contain_substr_len {

class MinContainSubstrLen {
public:
    static unsigned long min_len(const std::string& str1, const std::string& str2);
};

}  // namespace coding_interview_guide::string::min_contain_substr_len

#endif