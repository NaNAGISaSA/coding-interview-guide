#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_ADJUST_AND_REPLACE_STR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_ADJUST_AND_REPLACE_STR_H_

/*
【题目】
给定一个字符类型的数组chas[],chas右半区全是空字符，左半区不含有空字符。现在想将左半区的空格字符串替换成“%20”，
假设chas右半区足够大，可以满足替换需要的空间，请完成替换函数。
【补充】
给定一个字符串chas[],其中只含有字母字符和“*”字符，现在想把所有“*”全部挪到chas的左边，字母字符移到chas的右边。完成调整函数。
【要求】
所有题目时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::string::adjust_and_replace_str {

class AdjustStr {
public:
    static void adjust_str1(std::vector<char>& vec);
    static void adjust_str2(std::vector<char>& vec);
};

}  // namespace coding_interview_guide::string::adjust_and_replace_str

#endif