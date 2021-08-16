#include <unordered_set>

#include "03.binary_tree/17.find_closest_parent.h"

namespace coding_interview_guide::binary_tree::find_closest_parent {

const Node<int>* FindClosestNode::find_closest_parent(const Node<int>* root,
                                                      const Node<int>* node1,
                                                      const Node<int>* node2) {
    if (root == nullptr || root == node1 || root == node2) {
        return root;
    }
    auto left = find_closest_parent(root->left, node1, node2);
    auto right = find_closest_parent(root->right, node1, node2);
    if (left != nullptr && right != nullptr) {
        return root;
    }
    return left == nullptr ? right : left;
}

namespace {
void init_map(const Node<int>* root, std::unordered_map<const Node<int>*, const Node<int>*>& map) {
    if (root == nullptr) {
        return;
    }
    if (root->left != nullptr) {
        map.insert({root->left, root});
        init_map(root->left, map);
    }
    if (root->right != nullptr) {
        map.insert({root->right, root});
        init_map(root->right, map);
    }
}
}  // namespace

FrequentFindClosestNode::FrequentFindClosestNode(const Node<int>* root) {
    if (root != nullptr) {
        record.insert({root, nullptr});
        init_map(root, record);
    }
}

const Node<int>* FrequentFindClosestNode::find_closest_parent(const Node<int>* node1, const Node<int>* node2) {
    std::unordered_set<const Node<int>*> set;
    while (node1 != nullptr) {
        set.insert(node1);
        node1 = record[node1];
    }
    while (set.find(node2) == set.end()) {
        node2 = record[node2];
    }
    return node2;
}

namespace {
void collect_nodes(const Node<int>* root, std::unordered_set<const Node<int>*>& set) {
    if (root == nullptr) {
        return;
    }
    set.insert(root);
    collect_nodes(root->left, set);
    collect_nodes(root->right, set);
}

void init_pair_map(
    const Node<int>* root,
    std::unordered_map<const Node<int>*, std::unordered_map<const Node<int>*, const Node<int>*>>& record) {
    if (root == nullptr) {
        return;
    }
    init_pair_map(root->left, record);
    init_pair_map(root->right, record);
    std::unordered_set<const Node<int>*> left_nodes;
    std::unordered_set<const Node<int>*> right_nodes;
    collect_nodes(root->left, left_nodes);
    collect_nodes(root->right, right_nodes);
    for (auto it = left_nodes.begin(); it != left_nodes.end(); ++it) {
        for (auto it2 = right_nodes.begin(); it2 != right_nodes.end(); ++it2) {
            if (record.find(*it) == record.end()) {
                record.insert({*it, {{*it2, root}}});
            } else {
                record[*it].insert({*it2, root});
            }
        }
    }
    for (auto it = left_nodes.begin(); it != left_nodes.end(); ++it) {
        if (record.find(*it) == record.end()) {
            record.insert({*it, {{root, root}}});
        } else {
            record[*it].insert({root, root});
        }
    }
    for (auto it = right_nodes.begin(); it != right_nodes.end(); ++it) {
        if (record.find(*it) == record.end()) {
            record.insert({*it, {{root, root}}});
        } else {
            record[*it].insert({root, root});
        }
    }
}
}  // namespace

FrequentFindClosestNode2::FrequentFindClosestNode2(const Node<int>* root) {
    init_pair_map(root, record);
}

const Node<int>* FrequentFindClosestNode2::find_closest_parent(const Node<int>* node1, const Node<int>* node2) {
    if (node1 == node2) {
        return node1;
    }
    if (record.find(node1) != record.end()) {
        auto map = record[node1];
        if (map.find(node2) != map.end()) {
            return map[node2];
        }
    }
    if (record.find(node2) != record.end()) {
        auto map = record[node2];
        if (map.find(node1) != map.end()) {
            return map[node1];
        }
    }
    return nullptr;
}

}  // namespace coding_interview_guide::binary_tree::find_closest_parent
