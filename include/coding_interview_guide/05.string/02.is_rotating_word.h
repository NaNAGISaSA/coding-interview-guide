#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_IS_ROTATING_WORD_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_IS_ROTATING_WORD_H_

/*
【题目】
如果一个字符串为str，把字符串的前面任意部分挪到后面形成的字符串交str的旋转词。
比如str=“12345”，str的旋转串有“12345”、“45123”等等。给定两个字符串，判断是否为旋转词。
*/

#include <string>

namespace coding_interview_guide::string::is_rotating_word {

class IsRotatingWord {
public:
    static bool rotating(const std::string& str1, const std::string& str2);
    static bool rotating_method2(const std::string& str1, const std::string& str2);
};

}  // namespace coding_interview_guide::string::is_rotating_word

#endif