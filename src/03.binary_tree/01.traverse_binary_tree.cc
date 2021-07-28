#include <iostream>

#include "03.binary_tree/01.traverse_binary_tree.h"

namespace {
void print(int num) {
    std::cout << std::to_string(num) << " ";
}
}  // namespace

namespace coding_interview_guide::binary_tree::traverse_binary_tree {

// void TraverseBinaryTree::pre_order_traverse(Node<int>* root);
// void TraverseBinaryTree::in_order_traverse(Node<int>* root);
// void TraverseBinaryTree::post_order_traverse(Node<int>* root);

void TraverseBinaryTree::pre_order_traverse_recurse(Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    print(root->val);
    TraverseBinaryTree::pre_order_traverse_recurse(root->left);
    TraverseBinaryTree::pre_order_traverse_recurse(root->right);
}

void TraverseBinaryTree::in_order_traverse_recurse(Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    TraverseBinaryTree::in_order_traverse_recurse(root->left);
    print(root->val);
    TraverseBinaryTree::in_order_traverse_recurse(root->right);
}

void TraverseBinaryTree::post_order_traverse_recurse(Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    TraverseBinaryTree::post_order_traverse_recurse(root->left);
    TraverseBinaryTree::post_order_traverse_recurse(root->right);
    print(root->val);
}

}  // namespace coding_interview_guide::binary_tree::traverse_binary_tree
