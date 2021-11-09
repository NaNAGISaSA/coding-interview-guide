#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_STR_NUM_RELATIONSHIP_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_STR_NUM_RELATIONSHIP_H_

/*
【题目】
一个char类型的数组chs，其中所有的字符都不同。
例如，chs = ['A', 'B', 'C', ... 'Z']，则字符串与整数的对应关系如下：
A,  B...Z, AA, AB... AZ, BA, BB... ZZ,  AAA... ZZZ,   AAAA...
1,  2, 26, 27, 28... 52, 53, 54... 702, 703... 18278, 18279.
例如，chs=['A','B','C']，则字符串与整数的对应关系如下：
A, B, C, AA, AB...CC, AAA...CCC, AAAA....
1  2  3  4   5    12   13    39   40
给定一个数组chs, 实现根据对应关系完成字符串与整数相互转换的两个函数
【要求】
数字转字符串的复杂度为O(logn)（以chs长度为底），字符串转数字的复杂度为O(字符串长度)
*/

#include <string>
#include <vector>

namespace coding_interview_guide::other_problems::str_num_relationship {

class StrNumRelationship {
public:
    static std::string num_to_str(const std::vector<char>& vec, unsigned int num);
    static unsigned int str_to_num(const std::vector<char>& vec, const std::string& str);
};

}  // namespace coding_interview_guide::other_problems::str_num_relationship

#endif
