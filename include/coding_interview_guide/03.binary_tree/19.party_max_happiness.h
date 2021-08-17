#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_PARTY_MAX_HAPPINESS_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_PARTY_MAX_HAPPINESS_H_

/*
【题目】
整个公司的人员结构可以看作是一棵标准的多叉树。树的头节点是公司唯一的老板，除老板外，每个员工都有唯一的直接上级，
叶节点是没有任何下属的基层员工，除基层员工外，每个员工都有一个或多个直接下级，另外每个员工都有一个快乐值。

这个公司现在要办 party，你可以决定哪些员工来，哪些员工不来。但是要遵循如下的原则：
1.如果某个员工来了，那么这个员工的所有直接下级都不能来。
2.派对的整体快乐值是所有到场员工快乐值的累加。
3.你的目标是让派对的整体快乐值尽量大。

给定一棵多叉树，请输出派对的最大快乐值。
*/

#include <vector>

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::party_max_happiness {

struct Employee {
    Employee(unsigned int _happy) : happy(_happy), subordinates() {
    }

    unsigned int happy;
    std::vector<const Employee*> subordinates;
};

class PartyMaxHappiness {
public:
    static unsigned int max_happiness(const Employee* boss);
};

}  // namespace coding_interview_guide::binary_tree::party_max_happiness

#endif
