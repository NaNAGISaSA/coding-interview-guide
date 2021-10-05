#ifndef _CODING_INTERVIEW_GUIDE_STRING_MIN_PALINDROME_CUT_NUM_H_
#define _CODING_INTERVIEW_GUIDE_STRING_MIN_PALINDROME_CUT_NUM_H_

/*
【题目】
给定一个字符串，返回把str全部切割成回文串的最少切割数。
【要求】
时间复杂度O（N^2），额外空间复杂度O（N^2）。
*/

#include <string>

namespace coding_interview_guide::string::min_palindrome_cut_num {

class MinPalindromeCutNum {
public:
    static unsigned int min_num(const std::string& str);
};

}  // namespace coding_interview_guide::string::min_palindrome_cut_num

#endif