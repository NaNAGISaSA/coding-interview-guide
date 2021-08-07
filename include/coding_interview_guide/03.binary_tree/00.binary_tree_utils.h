#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_BINARY_TREE_UTILS_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_BINARY_TREE_UTILS_H_

#include <utility>

namespace coding_interview_guide::binary_tree {

template <typename T>
struct Node {
    Node(T& value) : val(value), left(nullptr), right(nullptr) {
    }
    Node(T&& value) : val(std::move(value)), left(nullptr), right(nullptr) {
    }
    T val;
    Node* left;
    Node* right;
};

template <typename T>
void construct_tree_helper(Node<T>* root, Node<T>* left, Node<T>* right) {
    root->left = left;
    root->right = right;
}

}  // namespace coding_interview_guide::binary_tree

#endif
