#include <algorithm>
#include <queue>
#include <unordered_map>
#include <utility>

#include "03.binary_tree/07.find_max_bst_topology.h"

namespace coding_interview_guide::binary_tree::find_max_bst_topology {

namespace {
unsigned int binary_search_max_bst_topology(const Node<int>* root) {
    std::queue<const Node<int>*> queue;
    if (root->left != nullptr) {
        queue.push(root->left);
    }
    if (root->right != nullptr) {
        queue.push(root->right);
    }
    unsigned int max_bst_topology = 1;
    while (queue.size()) {
        const Node<int>* front = queue.front();
        queue.pop();

        auto is_valid_node = [&root](const Node<int>* node_to_find) {
            const Node<int>* curr = root;
            while (curr != nullptr) {
                if (node_to_find == curr) {
                    return true;
                }
                if (node_to_find->val > curr->val) {
                    curr = curr->right;
                } else {
                    curr = curr->left;
                }
            }
            return false;
        };

        if (is_valid_node(front)) {
            ++max_bst_topology;
            if (front->left != nullptr) {
                queue.push(front->left);
            }
            if (front->right != nullptr) {
                queue.push(front->right);
            }
        }
    }
    return max_bst_topology;
}
}  // namespace

unsigned int FindMaxBSTTopology::max_topology_num(const Node<int>* root) {
    if (root == nullptr) {
        return 0;
    }
    unsigned int max_num = binary_search_max_bst_topology(root);
    max_num = std::max(FindMaxBSTTopology::max_topology_num(root->left), max_num);
    return std::max(FindMaxBSTTopology::max_topology_num(root->right), max_num);
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