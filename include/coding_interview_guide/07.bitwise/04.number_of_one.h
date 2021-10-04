#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_NUMBER_OF_ONE_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_NUMBER_OF_ONE_H_

/*
【题目】
给定一个32位整数n，返回该整数二进制形式1的个数。
*/

namespace coding_interview_guide::bitwise::number_of_one {

class NumberOfOne {
public:
    static unsigned int count_m1(int a);
    static unsigned int count_m2(int a);
    static unsigned int count_m3(int a);
};

}  // namespace coding_interview_guide::bitwise::number_of_one

#endif