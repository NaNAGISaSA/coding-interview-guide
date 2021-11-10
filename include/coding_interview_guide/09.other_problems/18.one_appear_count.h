#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_ONE_APPEAR_COUNT_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_ONE_APPEAR_COUNT_H_

/*
【题目】
给定一个整数n，返回从1到n的数字中1出现的个数。
例如：
n = 5, 1 ∼ n为1, 2, 3, 4, 5，返回1；
n = 11, 1 ∼ n为1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11，返回4。
*/

namespace coding_interview_guide::other_problems::one_appear_count {

class OneAppearCount {
public:
    static unsigned int count(unsigned int num);
    static unsigned int count_opt(unsigned int num);
};

}  // namespace coding_interview_guide::other_problems::one_appear_count

#endif
