#include <algorithm>
#include <queue>
#include <unordered_map>
#include <utility>

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

namespace {
using contrib_map = std::unordered_map<const Node<int>*, std::pair<unsigned int, unsigned int>>;

unsigned int modify_contrib_map(const Node<int>* root, const int val, contrib_map& map, bool is_left) {
    if (root == nullptr || map.find(root) == map.end()) {
        return 0;
    }
    auto& record = map[root];
    unsigned int contrib = record.first + record.second + 1;
    if ((is_left && root->val > val) || (!is_left && root->val < val)) {
        map.erase(root);
        return contrib;
    }
    unsigned int minus = modify_contrib_map(is_left ? root->right : root->left, val, map, is_left);
    if (is_left) {
        record.second -= minus;
    } else {
        record.first -= minus;
    }
    return minus;
}

unsigned int topology_contrib_method(const Node<int>* root, contrib_map& map) {
    if (root == nullptr) {
        return 0;
    }
    unsigned int left = topology_contrib_method(root->left, map);
    unsigned int right = topology_contrib_method(root->right, map);
    modify_contrib_map(root->left, root->val, map, true);
    modify_contrib_map(root->right, root->val, map, false);
    unsigned int lbst_num = 0;
    unsigned int rbst_num = 0;
    if (map.find(root->left) != map.end()) {
        lbst_num += map[root->left].first + map[root->left].second + 1;
    }
    if (map.find(root->right) != map.end()) {
        rbst_num += map[root->right].first + map[root->right].second + 1;
    }
    map.insert({root, {lbst_num, rbst_num}});
    return std::max(lbst_num + rbst_num + 1, std::max(left, right));
}
}  // namespace

unsigned int FindMaxBSTTopology::max_topology_num_opt(const Node<int>* root) {
    contrib_map map;
    return topology_contrib_method(root, map);
}

}  // namespace coding_interview_guide::binary_tree::find_max_bst_topology