#include <algorithm>
#include <unordered_map>

#include "03.binary_tree/05.max_path_length_for_sum.h"

namespace coding_interview_guide::binary_tree::max_path_length_for_sum {

namespace {
unsigned int find_path_in_pre_order(const Node<int>* root,
                                    const int sum,
                                    const int pre_sum,
                                    const unsigned int level,
                                    unsigned int max_path_length,
                                    std::unordered_map<int, unsigned int>& map) {
    if (root == nullptr) {
        return max_path_length;
    }
    int curr_sum = pre_sum + root->val;
    if (map.find(curr_sum) == map.end()) {
        map.insert({curr_sum, level});
    }
    if (map.find(curr_sum - sum) != map.end()) {
        max_path_length = std::max(level - map[curr_sum - sum], max_path_length);
    }
    max_path_length = find_path_in_pre_order(root->left, sum, curr_sum, level + 1, max_path_length, map);
    max_path_length = find_path_in_pre_order(root->right, sum, curr_sum, level + 1, max_path_length, map);
    if (map.find(curr_sum) != map.end() && map[curr_sum] == level) {
        map.erase(curr_sum);
    }
    return max_path_length;
}
}  // namespace

unsigned int MaxPathLength::max_length(const Node<int>* root, const int sum) {
    std::unordered_map<int, unsigned int> map{{0, 0}};
    return find_path_in_pre_order(root, sum, 0, 1, 0, map);
}

}  // namespace coding_interview_guide::binary_tree::max_path_length_for_sum
