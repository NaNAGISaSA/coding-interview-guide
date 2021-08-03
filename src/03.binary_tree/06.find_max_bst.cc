#include <algorithm>
#include <limits>

#include "03.binary_tree/06.find_max_bst.h"

namespace coding_interview_guide::binary_tree::find_max_bst {

namespace {
struct Info {
    const Node<int>* max_bst_head{nullptr};
    unsigned int max_bst_size{0};
    int min{std::numeric_limits<int>::max()};
    int max{std::numeric_limits<int>::min()};
};

Info find_max_bst_dp_like_method(const Node<int>* root) {
    if (root == nullptr) {
        return Info();
    }
    Info left_info = find_max_bst_dp_like_method(root->left);
    Info right_info = find_max_bst_dp_like_method(root->right);
    unsigned int max_bst_size = std::max(left_info.max_bst_size, right_info.max_bst_size);
    const Node<int>* max_bst_head =
        max_bst_size == left_info.max_bst_size ? left_info.max_bst_head : right_info.max_bst_head;
    if (root->left == left_info.max_bst_head && root->right == right_info.max_bst_head && root->val > left_info.max &&
        root->val < right_info.min) {
        max_bst_size = left_info.max_bst_size + right_info.max_bst_size + 1;
        max_bst_head = root;
    }
    int min_value = std::min(std::min(left_info.min, right_info.min), root->val);
    int max_value = std::max(std::max(left_info.max, right_info.max), root->val);
    return {max_bst_head, max_bst_size, min_value, max_value};
}
}  // namespace

const Node<int>* FindMaxBST::find_max_bst(const Node<int>* root) {
    return find_max_bst_dp_like_method(root).max_bst_head;
}

}  // namespace coding_interview_guide::binary_tree::find_max_bst
