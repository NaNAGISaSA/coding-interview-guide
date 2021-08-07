#include <iostream>
#include <queue>

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
        std::cout << "Level " << std::to_string(level) << " :";
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
        ++level;
        queue = std::move(tmp_queue);
    }
}

// void PrintBinaryTree::zigzag_print(const Node<int>* root) {
// }

}  // namespace coding_interview_guide::binary_tree::level_and_zigzag_print
