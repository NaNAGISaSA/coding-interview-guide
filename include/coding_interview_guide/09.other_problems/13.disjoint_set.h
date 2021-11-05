#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_DISJOINT_SET_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_DISJOINT_SET_H_

/*
【题目】
给定一个没有重复值的整形数组arr，初始时认为arr中每一个数各自都是一个单独的集合。请设计一种叫UnionFind的结构，并提供以下两个操作。
bool is_same_set(int a, int b): 查询a和b这两个数是否属于一个集合；
void union(int a, int b): 把a所在的集合与b所在的集合合并在一起，原本两个集合各自的元素以后都算作同一个集合。
【要求】
如果调用is_same_set和union的总次数逼近或超过O(N)，请做到单次调用is_same_set或union方法的平均时间复杂度为O(1)。
*/

#include <memory>
#include <vector>

namespace coding_interview_guide::other_problems::disjoint_set {

class DisjointSet {
public:
    DisjointSet(const std::vector<int>& vec);
    ~DisjointSet();

    bool is_same_set(int a, int b);
    void union_set(int a, int b);

private:
    struct Impl;
    std::unique_ptr<Impl> pimpl;
};

}  // namespace coding_interview_guide::other_problems::disjoint_set

#endif
