#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_DNF_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_DNF_PROBLEM_H_

/*
【题目】
给定一个二维数组map，含义是一张地图，例如，如下矩阵：
-2  -3   3
-5  -10  1
 0   30 -5
游戏的规则如下:
1）骑士从左上角出发，每次只能向右或向下走，最后到达右下角见到公主。
2）地图中每个位置的值代表骑士要遭遇的事情。如果是负数，说明此处有怪兽，要让骑士损失血量。如果是非负数，代表此处有血瓶，能让骑士回血。
3）骑士从左上角到右下角的过程中，走到任何一个位置时，血量都不能少于1。
为了保证骑土能见到公主，初始血量至少是多少？根据map,输出初始血量。
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::dnf_problem {

class DNF {
public:
    static unsigned long max_hp(const std::vector<std::vector<int>>& map);
};

}  // namespace coding_interview_guide::dynamic_programming::dnf_problem

#endif
