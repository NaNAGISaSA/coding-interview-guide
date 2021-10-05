#ifndef _CODING_INTERVIEW_GUIDE_STRING_MIN_CHANGE_ROUTE_H_
#define _CODING_INTERVIEW_GUIDE_STRING_MIN_CHANGE_ROUTE_H_

/*
【题目】
给定两个字符串，记为start和to，再给定一个字符串列表list，list中一定包含to，list中没有重复的字符串。所有的字符串都是小写的。
规定start每次只能改变一个字符，最终的目标是彻底变成to，但是每次变成新字符串必须在list中存在。请返回所有的最短的变换路径（按照字典序最小的顺序输出）。
*/

#include <string>
#include <vector>

namespace coding_interview_guide::string::min_change_route {

class MinChangeRoute {
public:
    static std::string min_route(const std::vector<std::string>& vec, const std::string& start, const std::string& to);
};

}  // namespace coding_interview_guide::string::min_change_route

#endif