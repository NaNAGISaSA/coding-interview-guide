#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_BINARY_TREE_UTILS_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_BINARY_TREE_UTILS_H_

#include <utility>

namespace coding_interview_guide::binary_tree {

template <typename T>
struct Node {
    Node(const T& value) : val(value), left(nullptr), right(nullptr) {
    }
    Node(T&& value) : val(std::move(value)), left(nullptr), right(nullptr) {
    }
    T val;
    Node* left;
    Node* right;
};

template <typename T>
struct NewNode {
    NewNode(const T& value, NewNode* p = nullptr) : val(value), left(nullptr), right(nullptr), parent(p) {
    }
    NewNode(T&& value, NewNode* p = nullptr) : val(std::move(value)), left(nullptr), right(nullptr), parent(p) {
    }
    T val;
    NewNode* left;
    NewNode* right;
    NewNode* parent;
};

template <typename T>
void construct_tree_helper(Node<T>* root, Node<T>* left, Node<T>* right) {
    root->left = left;
    root->right = right;
}

template <typename T>
void construct_tree_helper(NewNode<T>* root, NewNode<T>* left, NewNode<T>* right, NewNode<T>* parent) {
    root->left = left;
    root->right = right;
    root->parent = parent;
}

}  // namespace coding_interview_guide::binary_tree

#endif
