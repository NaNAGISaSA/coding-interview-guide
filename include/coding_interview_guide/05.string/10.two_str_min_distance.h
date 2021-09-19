#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_TWO_STR_MIN_DISTANCE_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_TWO_STR_MIN_DISTANCE_H_

/*
【题目】
给定一个字符串数组strs，再给定两个字符串str1和str2，返回在strs中str1和str2的最小距离，如果str1或str2为null，或不在strs中，返回-1。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <string>
#include <vector>

namespace coding_interview_guide::string::two_str_min_distance {

class TwoStrMinDistance {
public:
    static long min_distance(const std::vector<std::string>& vec, const std::string& str1, const std::string& str2);
};

}  // namespace coding_interview_guide::string::two_str_min_distance

#endif