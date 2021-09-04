#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MIN_EDIT_COST_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MIN_EDIT_COST_H_

/*
【题目】
给定两个字符串str1和str2，再给定三个整数ic，dc和rc，分别代表插入、删除和替换一个字符的代价，请输出将str1编辑成str2的最小代价。
*/

#include <string>

namespace coding_interview_guide::dynamic_programming::min_edit_cost {

class MinEditCost {
public:
    static unsigned long min_cost(const std::string& str1,
                                  const std::string& str2,
                                  unsigned int insert_cost,
                                  unsigned int delete_cost,
                                  unsigned int replace_cost);
};

}  // namespace coding_interview_guide::dynamic_programming::min_edit_cost

#endif