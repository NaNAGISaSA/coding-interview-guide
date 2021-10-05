#ifndef _CODING_INTERVIEW_GUIDE_STRING_BINARY_STR_NUMBER_H_
#define _CODING_INTERVIEW_GUIDE_STRING_BINARY_STR_NUMBER_H_

/*
【题目】
给定一个整数n，求由“0”字符和“1”字符组成的长度为n的所有字符串中，满足“0”字符的左边必有“1”字符的字符串的数量。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

namespace coding_interview_guide::string::binary_str_number {

class BinaryStrNumber {
public:
    static unsigned long get_number(unsigned int number);
};

}  // namespace coding_interview_guide::string::binary_str_number

#endif