#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_ROTATE_TRANS_STR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_ROTATE_TRANS_STR_H_

/*
【题目】
一个字符串可以分解为多种二叉树。如果str长度为1，认为不可分解；如果str长度为N(N>1),左半部分长度可以为1~N-1，
右半部分为剩下的长度，然后你可以交换左右两部分。并且左右部分可以按照同样的逻辑，继续分解。
每一个形成的字符串都可以是原字符串的旋变字符串。现在给你两个字符串str1和str2，判断str2是否为str1的旋变字符串。
【要求】
时间复杂度O（N^4），额外空间复杂度O（N^3）。（TODO：动态规划）
*/

#include <string>

namespace coding_interview_guide::string::rotate_trans_str {

class RotateTransStr {
public:
    static bool is_rotate_trans_str(const std::string& str1, const std::string& str2);
};

}  // namespace coding_interview_guide::string::rotate_trans_str

#endif