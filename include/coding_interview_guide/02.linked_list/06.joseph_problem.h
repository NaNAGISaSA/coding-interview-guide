#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_JOSEPH_PROBLEM_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_JOSEPH_PROBLEM_H_

/*
【题目】
据说著名犹太历史学家 Josephus 有过以下故事：在罗马人占领乔塔帕特后，39 个犹太人与 Josephus
及他的朋友躲到一个洞中，39个犹太人决定宁愿死也不要被敌人抓到， 于是决定了一种自杀方式，41 个人排成一个圆圈，由第 1
个人开始报数，报数到 3 的人就自杀，然后再由下一个人重新报 1，报数到 3 的人再自杀，这样依次下去，
直到剩下最后一个人时，那个人可以自由选择自己的命运。这就是著名的约瑟夫问题。现在请用单向环形链表得出最终存活的人的编号。
【要求】
输入描述：m 表示每次报数到 m 就自杀。
输出描述：输出最后存活下来的人编号(编号从1开始到n)
【备注】
1 <= n <= m <= 10000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::joseph_problem {

class JosephProblem {
public:
    static unsigned int live_man_number(Node<int>* head, unsigned int m);
};

}  // namespace coding_interview_guide::linked_list::joseph_problem

#endif