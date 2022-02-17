#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_PROJECT_MAX_PROFIT_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_PROJECT_MAX_PROFIT_H_

/*
【题目】
给定两个整数W和K，W代表你拥有的初始资金，K代表你最多可以做K个项目。
再给定两个长度为N的正数数组costs[]和profits[]，代表一共有N个项目，costs[i]和profits[i]分别表示第i号项目的启动资金与
做完后的利润(注意是利润，如果一个项目的启动资金为10，利润为4，代表该项目最终的收入为14)。
你不能并行只能串行地做项目，并且手里拥有的资金大于或等于某个项目的启动资金时，你才能做这个项目。
该如何选择做项目，能让你最终的收益最大？返回最后能获得的最大资金。
【要求】
时间复杂度O（N+KlogN），额外空间复杂度O（N）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::project_max_profit {

class ProjectMaxProfit {
public:
    static unsigned int max_profit(unsigned int w,
                                   unsigned int k,
                                   const std::vector<unsigned int>& costs,
                                   const std::vector<unsigned int>& profits);
};

}  // namespace coding_interview_guide::vector_and_matrix::project_max_profit

#endif