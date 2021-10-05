#ifndef _CODING_INTERVIEW_GUIDE_STRING_MIN_CONCAT_STR_H_
#define _CODING_INTERVIEW_GUIDE_STRING_MIN_CONCAT_STR_H_

/*
【题目】
给定一个字符串的数组strs，请找到一种拼接顺序，使得所有的字符串拼接起来组成的字符串是所有可能性中字典序最小的，并返回这个字符串。
【要求】
时间复杂度O（NlogN）。
*/

#include <string>
#include <vector>

namespace coding_interview_guide::string::min_concat_str {

class MinConcatStr {
public:
    static std::string min_str(std::vector<std::string>& vec);
};

}  // namespace coding_interview_guide::string::min_concat_str

#endif