#include <algorithm>
#include <queue>

#include "03.binary_tree/07.find_max_bst_topology.h"

namespace coding_interview_guide::binary_tree::find_max_bst_topology {

namespace {
unsigned int binary_search_max_bst_topology(const Node<int>* root) {
    if (root->left == nullptr && root->right == nullptr) {
        return 1;
    }
    std::queue<const Node<int>*> queue;
    if (root->left != nullptr) {
        queue.push(root->left);
    }
    if (root->right != nullptr) {
        queue.push(root->right);
    }
    unsigned int max_bst_topology = 1;
    int curr_root_val = root->val;
    const Node<int>* curr_root_node = root;
    while (queue.size()) {
        const Node<int>* front = queue.front();
        queue.pop();
        while (curr_root_node != nullptr && curr_root_node != front) {
            curr_root_node = front->val > curr_root_val ? curr_root_node->right : curr_root_node->left;
            if (curr_root_node != nullptr) {
                curr_root_val = curr_root_node->val;
            }
        }
        if (curr_root_node == front) {
            ++max_bst_topology;
            if (curr_root_node->left != nullptr) {
                queue.push(curr_root_node->left);
            }
            if (curr_root_node->right != nullptr) {
                queue.push(curr_root_node->right);
            }
        }
        curr_root_node = root;
        curr_root_val = root->val;
    }
    return max_bst_topology;
}
}  // namespace

unsigned int FindMaxBSTTopology::max_topology_num(const Node<int>* root) {
    if (root == nullptr) {
        return 0;
    }
    unsigned int left_max = FindMaxBSTTopology::max_topology_num(root->left);
    unsigned int right_max = FindMaxBSTTopology::max_topology_num(root->right);
    unsigned int max_topology_num = std::max(left_max, right_max);
    unsigned int middle_num = binary_search_max_bst_topology(root);
    return middle_num > max_topology_num ? middle_num : max_topology_num;
}

}  // namespace coding_interview_guide::binary_tree::find_max_bst_topology