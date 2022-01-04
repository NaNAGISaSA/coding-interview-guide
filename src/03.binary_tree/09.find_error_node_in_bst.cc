#include "03.binary_tree/09.find_error_node_in_bst.h"

namespace coding_interview_guide::binary_tree::find_error_node_in_bst {

namespace {
const Node<int>* in_order_traverse(const Node<int>* root, std::pair<int, int>& pair, const Node<int>* prev) {
    if (root == nullptr) {
        return prev;
    }
    prev = in_order_traverse(root->left, pair, prev);
    if (prev != nullptr && prev->val > root->val) {
        if (pair.first == 0 && pair.second == 0) {
            pair.first = root->val;
            pair.second = prev->val;
        } else {
            pair.first = root->val;
        }
    }
    prev = root;
    return in_order_traverse(root->right, pair, prev);
}
}  // namespace

std::pair<int, int> FindErrorNodeInBst::error_node(const Node<int>* root) {
    auto pair = std::make_pair(0, 0);
    in_order_traverse(root, pair, nullptr);
    return pair;
}

}  // namespace coding_interview_guide::binary_tree::find_error_node_in_bst
