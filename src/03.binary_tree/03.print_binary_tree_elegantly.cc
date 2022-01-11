#include <iostream>
#include <string>

#include "03.binary_tree/03.print_binary_tree_elegantly.h"

namespace coding_interview_guide::binary_tree::print_binary_tree_elegantly {

namespace {
size_t node_stride = 17;
size_t sign_length = 2;

void print_node(int val, unsigned int level, const char sign) {
    std::string space(level * node_stride, ' ');
    size_t val_len = std::to_string(val).size();
    std::string space_before((node_stride - val_len - sign_length) / 2, ' ');
    std::string space_after(space_before.size() + (node_stride - val_len - sign_length) % 2, ' ');
    std::cout << space << space_before << sign << std::to_string(val) << sign << space_after << std::endl;
}

void traverse_tree(const Node<int>* root, unsigned int level, const char sign) {
    if (root == nullptr) {
        return;
    }
    traverse_tree(root->right, level + 1, 'v');
    print_node(root->val, level, sign);
    traverse_tree(root->left, level + 1, '^');
}
}  // namespace

void PrintBinaryTreeElegantly::print(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    traverse_tree(root, 0, 'H');
}

}  // namespace coding_interview_guide::binary_tree::print_binary_tree_elegantly