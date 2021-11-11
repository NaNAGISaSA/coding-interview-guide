#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_NUM_IS_PALINDROME_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_NUM_IS_PALINDROME_H_

/*
【题目】
定义回文数的概念如下：
如果一个非负数左右完全对应，则该数是回文数，例如：121, 22等。
如果一个负数的绝对值左右完全对应，也是回文数，例如：-121, -22等。
给定一个32位整数num，判断num是否是回文数。
*/

namespace coding_interview_guide::other_problems::num_is_palindrome {

class NumIsPalindrome {
public:
    static bool is_palindrome(int number);
};

}  // namespace coding_interview_guide::other_problems::num_is_palindrome

#endif
