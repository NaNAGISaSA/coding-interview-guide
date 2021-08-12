#include <algorithm>
#include <limits>
#include <queue>

#include "03.binary_tree/14.is_bst_or_cbt.h"

namespace coding_interview_guide::binary_tree::is_bst_or_cbt {

namespace {
struct BstInfo {
    BstInfo() {
    }
    BstInfo(int _min, int _max, bool _is_bst) : min(_min), max(_max), is_bst(_is_bst) {
    }

    int min{std::numeric_limits<int>::max()};
    int max{std::numeric_limits<int>::min()};
    bool is_bst{true};
};

BstInfo is_bst_internal(const Node<int>* root) {
    if (root == nullptr) {
        return BstInfo();
    }
    auto left_info = is_bst_internal(root->left);
    auto right_info = is_bst_internal(root->right);
    int min = std::min(root->val, std::min(left_info.min, right_info.min));
    int max = std::max(root->val, std::max(left_info.max, right_info.max));
    return BstInfo(
        min, max, left_info.is_bst && right_info.is_bst && root->val > left_info.max && root->val < right_info.min);
}
}  // namespace

bool IsBstOrCbt::is_bst(const Node<int>* root) {
    return is_bst_internal(root).is_bst;
}

bool IsBstOrCbt::is_cbt(const Node<int>* root) {
    if (root == nullptr) {
        return true;
    }
    std::queue<const Node<int>*> queue;
    queue.push(root);
    const Node<int>* left = nullptr;
    const Node<int>* right = nullptr;
    while (queue.size()) {
        auto top = queue.front();
        queue.pop();
        left = top->left;
        right = top->right;
        if (left != nullptr && right != nullptr) {
            queue.push(left);
            queue.push(right);
        } else if (left == nullptr && right != nullptr) {
            return false;
        } else {
            if (left != nullptr && right == nullptr) {
                queue.push(left);
            }
            while (queue.size()) {
                top = queue.front();
                queue.pop();
                if (top->left != nullptr || top->right != nullptr) {
                    return false;
                }
            }
        }
    }
    return true;
}

}  // namespace coding_interview_guide::binary_tree::is_bst_or_cbt
