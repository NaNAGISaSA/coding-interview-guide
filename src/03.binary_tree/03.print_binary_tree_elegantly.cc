#include <iostream>
#include <string>

#include "03.binary_tree/03.print_binary_tree_elegantly.h"

namespace coding_interview_guide::binary_tree::print_binary_tree_elegantly {

namespace {
size_t MAX_PRINT_NODE = 17;

void print_node(int val, unsigned int level, const char sign) {
    std::string space(level * MAX_PRINT_NODE, ' ');
    size_t val_len = std::to_string(val).size();
    std::string space_before((MAX_PRINT_NODE - val_len - 2) / 2, ' ');
    std::string space_after(space_before.size() + (MAX_PRINT_NODE - val_len - 2) % 2, ' ');
    std::cout << space << space_before << sign << std::to_string(val) << sign << space_after << std::endl;
}

void traverse_tree(const Node<int>* root, unsigned int level, const char sign) {
    if (root->right != nullptr) {
        traverse_tree(root->right, level + 1, 'v');
    }
    print_node(root->val, level, sign);
    if (root->left != nullptr) {
        traverse_tree(root->left, level + 1, '^');
    }
}
}  // namespace

void PrintBinaryTreeElegantly::print(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    traverse_tree(root, 0, 'H');
}

}  // namespace coding_interview_guide::binary_tree::print_binary_tree_elegantly