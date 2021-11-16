#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_EN_ZH_CN_NUM_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_EN_ZH_CN_NUM_H_

/*
【题目】
给定一个32位整数num，写两个函数分别返回num的英文与中文表达字符串。
*/

#include <string>

namespace coding_interview_guide::other_problems::en_zh_cn_num {

class EnZhCnNum {
public:
    static std::string num_to_en(int num);
    static std::string num_to_zh_cn(int num);
};

}  // namespace coding_interview_guide::other_problems::en_zh_cn_num

#endif
