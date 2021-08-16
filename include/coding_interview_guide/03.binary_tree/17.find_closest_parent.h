#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_CLOSEST_PARENT_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_CLOSEST_PARENT_H_

/*
【题目】
给定一棵二叉树以及这棵树上的两个节点 o1 和 o2，请找到 o1 和 o2 的最近公共祖先节点。
【进阶】
给定一棵二叉树，多次给出这棵树上的两个节点 o1 和 o2，请对于每次询问，找到 o1 和 o2 的最近公共祖先节点。
*/

#include <unordered_map>

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::find_closest_parent {

class FindClosestNode {
public:
    static const Node<int>* find_closest_parent(const Node<int>* root, const Node<int>* node1, const Node<int>* node2);
};

class FrequentFindClosestNode {
public:
    FrequentFindClosestNode(const Node<int>* root);
    const Node<int>* find_closest_parent(const Node<int>* node1, const Node<int>* node2);

private:
    std::unordered_map<const Node<int>*, const Node<int>*> record;
};

class FrequentFindClosestNode2 {
public:
    FrequentFindClosestNode2(const Node<int>* root);
    const Node<int>* find_closest_parent(const Node<int>* node1, const Node<int>* node2);

private:
    std::unordered_map<const Node<int>*, std::unordered_map<const Node<int>*, const Node<int>*>> record;
};

}  // namespace coding_interview_guide::binary_tree::find_closest_parent

#endif
