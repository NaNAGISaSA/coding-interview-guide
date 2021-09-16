#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_FLIP_STR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_FLIP_STR_H_

/*
【题目】
给定字符类型的数组chas，请在单词间做逆序调整。只要做到单词的顺序逆序即可，对空格的位置没有要求。
【补充】
给一个字符类型的数组chas和一个整数size，请把大小为size的左半区整体右移到右半区，右半区整体移动到左边。
【要求】
所有题目时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <string>

namespace coding_interview_guide::string::flip_str {
class FlipStr {
public:
    static void flip_str1(std::string& str);
    static void flip_str2(std::string& str, size_t size);
};

}  // namespace coding_interview_guide::string::flip_str

#endif