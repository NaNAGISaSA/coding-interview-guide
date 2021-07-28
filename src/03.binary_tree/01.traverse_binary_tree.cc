#include <iostream>
#include <stack>

#include "03.binary_tree/01.traverse_binary_tree.h"

namespace {
void print(int num) {
    std::cout << std::to_string(num) << " ";
}
}  // namespace

namespace coding_interview_guide::binary_tree::traverse_binary_tree {

void TraverseBinaryTree::pre_order_traverse_recurse(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    print(root->val);
    TraverseBinaryTree::pre_order_traverse_recurse(root->left);
    TraverseBinaryTree::pre_order_traverse_recurse(root->right);
}

void TraverseBinaryTree::in_order_traverse_recurse(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    TraverseBinaryTree::in_order_traverse_recurse(root->left);
    print(root->val);
    TraverseBinaryTree::in_order_traverse_recurse(root->right);
}

void TraverseBinaryTree::post_order_traverse_recurse(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    TraverseBinaryTree::post_order_traverse_recurse(root->left);
    TraverseBinaryTree::post_order_traverse_recurse(root->right);
    print(root->val);
}

void TraverseBinaryTree::pre_order_traverse(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    std::stack<const Node<int>*> stack;
    stack.push(root);
    const Node<int>* top = nullptr;
    while (stack.size()) {
        top = stack.top();
        stack.pop();
        print(top->val);
        if (top->right != nullptr) {
            stack.push(top->right);
        }
        if (top->left != nullptr) {
            stack.push(top->left);
        }
    }
}

void TraverseBinaryTree::in_order_traverse(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    std::stack<const Node<int>*> stack;
    const Node<int>* curr = root;
    const Node<int>* top = nullptr;
    while (stack.size() || curr != nullptr) {
        if (curr == nullptr) {
            top = stack.top();
            stack.pop();
            print(top->val);
            curr = top->right;
        } else {
            stack.push(curr);
            curr = curr->left;
        }
    }
}

void TraverseBinaryTree::post_order_traverse_s1_method(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    std::stack<const Node<int>*> stack;
    stack.push(root);
    const Node<int>* last_pop_node = nullptr;
    const Node<int>* top = nullptr;
    while (stack.size()) {
        top = stack.top();
        if (top->left != nullptr && last_pop_node != top->left && last_pop_node != top->right) {
            stack.push(top->left);
        } else if (top->right != nullptr && last_pop_node != top->right) {
            stack.push(top->right);
        } else {
            last_pop_node = stack.top();
            print(last_pop_node->val);
            stack.pop();
        }
    }
}

void TraverseBinaryTree::post_order_traverse_s2_method(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    std::stack<const Node<int>*> s1;
    std::stack<const Node<int>*> s2;
    s1.push(root);
    const Node<int>* top = nullptr;
    while (s1.size()) {
        top = s1.top();
        s1.pop();
        if (top->left != nullptr) {
            s1.push(top->left);
        }
        if (top->right != nullptr) {
            s1.push(top->right);
        }
        s2.push(top);
    }
    while (s2.size()) {
        print(s2.top()->val);
        s2.pop();
    }
}

}  // namespace coding_interview_guide::binary_tree::traverse_binary_tree
