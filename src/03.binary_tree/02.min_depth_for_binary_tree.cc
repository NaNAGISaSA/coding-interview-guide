#include <algorithm>
#include <limits>

#include "03.binary_tree/02.min_depth_for_binary_tree.h"

namespace coding_interview_guide::binary_tree::min_depth_for_binary_tree {

namespace {
unsigned int process(const Node<int>* root, unsigned int level) {
    if (root->left == nullptr && root->right == nullptr) {
        return level;
    }
    unsigned int min_value = std::numeric_limits<unsigned int>::max();
    if (root->left != nullptr) {
        min_value = std::min(process(root->left, level + 1), min_value);
    }
    if (root->right != nullptr) {
        min_value = std::min(process(root->right, level + 1), min_value);
    }
    return min_value;
}
}  // namespace

unsigned int MinDepthForBinaryTree::min_depth(const Node<int>* root) {
    return root == nullptr ? 0 : process(root, 1);
}

}  // namespace coding_interview_guide::binary_tree::min_depth_for_binary_tree
