#include <algorithm>

#include "03.binary_tree/18.node_max_distance.h"

namespace coding_interview_guide::binary_tree::node_max_distance {

namespace {
struct RetInfo {
    unsigned int max_height;
    unsigned int max_length;
};

RetInfo max_distance_internal(const Node<int>* root) {
    if (root == nullptr) {
        return {0, 0};
    }
    RetInfo left_info = max_distance_internal(root->left);
    RetInfo right_info = max_distance_internal(root->right);
    return {std::max(left_info.max_height, right_info.max_height) + 1,
            std::max(std::max(left_info.max_length, right_info.max_length),
                     left_info.max_height + right_info.max_height + 1)};
}
}  // namespace

unsigned int NodeMaxDistance::max_distance(const Node<int>* root) {
    return max_distance_internal(root).max_length;
}

}  // namespace coding_interview_guide::binary_tree::node_max_distance
