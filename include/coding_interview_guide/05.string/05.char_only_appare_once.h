#ifndef _CODING_INTERVIEW_GUIDE_STRING_CHAR_ONLY_APPARE_ONCE_H_
#define _CODING_INTERVIEW_GUIDE_STRING_CHAR_ONLY_APPARE_ONCE_H_

/*
【题目】
给定一个字符串，判断字符串中所有字符是否都出现一次。
【要求】
1. 实现时间复杂度为O(N)的方法；
2. 实现空间复杂度为O(1)的方法。
*/

#include <string>

namespace coding_interview_guide::string::char_only_appare_once {

class CharOnlyAppareOnce {
public:
    static bool appare_once_time_opt(std::string& str);
    static bool appare_once_space_opt(std::string& str);
};

}  // namespace coding_interview_guide::string::char_only_appare_once

#endif
