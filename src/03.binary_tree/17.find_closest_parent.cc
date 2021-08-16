#include <unordered_set>

#include "03.binary_tree/17.find_closest_parent.h"

namespace coding_interview_guide::binary_tree::find_closest_parent {

const Node<int>* FindClosestNode::find_closest_parent(const Node<int>* root,
                                                      const Node<int>* node1,
                                                      const Node<int>* node2) {
    if (root == nullptr || root == node1 || root == node2) {
        return root;
    }
    auto left = find_closest_parent(root->left, node1, node2);
    auto right = find_closest_parent(root->right, node1, node2);
    if (left != nullptr && right != nullptr) {
        return root;
    }
    return left == nullptr ? right : left;
}

namespace {
void init_map(const Node<int>* root, std::unordered_map<const Node<int>*, const Node<int>*>& map) {
    if (root == nullptr) {
        return;
    }
    if (root->left != nullptr) {
        map.insert({root->left, root});
        init_map(root->left, map);
    }
    if (root->right != nullptr) {
        map.insert({root->right, root});
        init_map(root->right, map);
    }
}
}  // namespace

FrequentFindClosestNode::FrequentFindClosestNode(const Node<int>* root) {
    if (root != nullptr) {
        record.insert({root, nullptr});
        init_map(root, record);
    }
}

const Node<int>* FrequentFindClosestNode::find_closest_parent(const Node<int>* node1, const Node<int>* node2) {
    if (node1 == nullptr || node2 == nullptr) {
        return nullptr;
    }
    std::unordered_set<const Node<int>*> set;
    while (node1 != nullptr) {
        set.insert(node1);
        node1 = record[node1];
    }
    while (set.find(node2) == set.end()) {
        node2 = record[node2];
    }
    return node2;
}

}  // namespace coding_interview_guide::binary_tree::find_closest_parent