#include "03.binary_tree/22.count_cbt_node_number.h"

namespace coding_interview_guide::binary_tree::count_cbt_node_number {

namespace {
unsigned int max_level(const Node<int>* root) {
    unsigned int level = 0;
    while (root != nullptr) {
        ++level;
        root = root->left;
    }
    return level;
}

unsigned int count_internal(const Node<int>* root, const unsigned int height) {
    if (root == nullptr) {
        return 0;
    }
    if (max_level(root->right) == height - 1) {
        return (1 << (height - 1)) - 1 + 1 + count_internal(root->right, height - 1);
    } else {
        return (1 << (height - 2)) - 1 + 1 + count_internal(root->left, height - 1);
    }
}
}  // namespace

unsigned int CountCBTNodeNumber::count(const Node<int>* root) {
    if (root == nullptr) {
        return 0;
    }
    return count_internal(root, max_level(root));
}

}  // namespace coding_interview_guide::binary_tree::count_cbt_node_number
