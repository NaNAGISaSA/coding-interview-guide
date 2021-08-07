#include <deque>
#include <iostream>
#include <queue>
#include <utility>

#include "03.binary_tree/08.level_and_zigzag_print.h"

namespace coding_interview_guide::binary_tree::level_and_zigzag_print {

void PrintBinaryTree::level_print(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    std::queue<const Node<int>*> queue;
    queue.push(root);
    unsigned int level = 1;
    while (queue.size()) {
        std::queue<const Node<int>*> tmp_queue;
        std::cout << "Level " << std::to_string(level++) << " :";
        while (queue.size()) {
            auto top = queue.front();
            queue.pop();
            std::cout << " " << std::to_string(top->val);
            if (top->left != nullptr) {
                tmp_queue.push(top->left);
            }
            if (top->right != nullptr) {
                tmp_queue.push(top->right);
            }
        }
        std::cout << std::endl;
        queue = std::move(tmp_queue);
    }
}

void PrintBinaryTree::level_print_method2(const Node<int>* root) {
    if (root == nullptr) {
        return;
    }
    std::queue<const Node<int>*> queue;
    queue.push(root);
    unsigned int level = 1;
    const Node<int>* level_last = root;
    std::cout << "Level " << std::to_string(level++) << " :";
    while (queue.size()) {
        const Node<int>* top = queue.front();
        queue.pop();
        std::cout << " " << std::to_string(top->val);
        if (top->left != nullptr) {
            queue.push(top->left);
        }
        if (top->right != nullptr) {
            queue.push(top->right);
        }
        if (top == level_last && queue.size()) {
            std::cout << std::endl;
            level_last = queue.back();
            std::cout << "Level " << std::to_string(level++) << " :";
        }
    }
    std::cout << std::endl;
}

void PrintBinaryTree::zigzag_print(const Node<int>* root) {
    std::deque<const Node<int>*> deque;
    deque.push_back(root);
    bool left_to_right = true;
    unsigned int level = 1;
    while (deque.size()) {
        size_t curr_level_node = deque.size();
        if (left_to_right) {
            std::cout << "Level " << std::to_string(level++) << " from left to right:";
            for (size_t i = 0; i < curr_level_node; ++i) {
                auto front = deque.front();
                deque.pop_front();
                std::cout << " " << std::to_string(front->val);
                if (front->left != nullptr) {
                    deque.push_back(front->left);
                }
                if (front->right != nullptr) {
                    deque.push_back(front->right);
                }
            }
        } else {
            std::cout << "Level " << std::to_string(level++) << " from right to left:";
            for (size_t i = 0; i < curr_level_node; ++i) {
                auto back = deque.back();
                deque.pop_back();
                std::cout << " " << std::to_string(back->val);
                if (back->right != nullptr) {
                    deque.push_front(back->right);
                }
                if (back->left != nullptr) {
                    deque.push_front(back->left);
                }
            }
        }
        std::cout << std::endl;
        left_to_right = !left_to_right;
    }
}

}  // namespace coding_interview_guide::binary_tree::level_and_zigzag_print
