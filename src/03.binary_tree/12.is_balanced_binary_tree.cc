#include <cmath>

#include "03.binary_tree/12.is_balanced_binary_tree.h"

namespace coding_interview_guide::binary_tree::is_balanced_binary_tree {

namespace {
struct RetInfo {
    int max_height{0};
    bool is_balanced{true};
};

RetInfo is_balanced_internal(const Node<int>* root) {
    if (root == nullptr) {
        return RetInfo();
    }
    RetInfo left = is_balanced_internal(root->left);
    RetInfo right = is_balanced_internal(root->right);
    return {std::max(left.max_height, right.max_height) + 1,
            left.is_balanced && right.is_balanced && std::abs(left.max_height - right.max_height) <= 1};
}
}  // namespace

bool IsBalancedBinaryTree::is_balanced(const Node<int>* root) {
    return is_balanced_internal(root).is_balanced;
}

}  // namespace coding_interview_guide::binary_tree::is_balanced_binary_tree