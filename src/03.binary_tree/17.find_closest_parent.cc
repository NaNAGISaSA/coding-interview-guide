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

}  // namespace coding_interview_guide::binary_tree::find_closest_parent