#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_STACK_SORT_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_STACK_SORT_H_

/*
【题目】
栈元素为类型为整形，将该栈从顶到底按照从大到小的顺序排序。
【要求】
只允许申请一个栈，可申请新的变量，但不能申请额外的数据结构。
*/

#include <stack>

namespace coding_interview_guide::stack_and_queue::stack_sort {

class SortStack {
public:
    static void sort_stack(std::stack<int>&);
    static void sort_stack_opt(std::stack<int>&);
};

}  // namespace coding_interview_guide::stack_and_queue::stack_sort

#endif