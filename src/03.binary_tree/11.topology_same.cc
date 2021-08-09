#include <string>

#include "03.binary_tree/11.topology_same.h"

namespace coding_interview_guide::binary_tree::topology_same {

namespace {
bool is_same_internal(const Node<int>* root1, const Node<int>* root2) {
    if (root1 == nullptr || root2 == nullptr) {
        return root1 == root2;
    }
    return root1->val == root2->val && is_same_internal(root1->left, root2->left) &&
           is_same_internal(root1->right, root2->right);
}
}  // namespace

bool TopologySame::is_same(const Node<int>* root1, const Node<int>* root2) {
    if (root2 == nullptr) {
        return true;
    } else if (root1 == nullptr) {
        return false;
    }
    return TopologySame::is_same(root1->left, root2) || TopologySame::is_same(root1->right, root2) ||
           is_same_internal(root1, root2);
}

namespace {
std::string serial(const Node<int>* root) {
    if (root == nullptr) {
        return "#!";
    }
    return serial(root->left) + serial(root->right) + "#" + std::to_string(root->val);
}
}  // namespace

bool TopologySame::is_same_opt(const Node<int>* root1, const Node<int>* root2) {
    if (root2 == nullptr) {
        return true;
    } else if (root1 == nullptr) {
        return false;
    }
    std::string root1_serial = serial(root1);
    std::string root2_serial = serial(root2);
    // use kmp algorithm to acquire O(M+N) time complexity
    return root1_serial.find(root2_serial) != std::string::npos;
}

}  // namespace coding_interview_guide::binary_tree::topology_same