#include "03.binary_tree/10.topology_intersection.h"

namespace coding_interview_guide::binary_tree::topology_intersection {

namespace {
bool find_intersection(const Node<int>* root1, const Node<int>* root2) {
    if (root2 == nullptr) {
        return true;
    } else if (root1 == nullptr) {
        return false;
    }
    return root1->val == root2->val && find_intersection(root1->left, root2->left) &&
           find_intersection(root1->right, root2->right);
}
}  // namespace

bool TopologyIntersection::topology_intersection(const Node<int>* root1, const Node<int>* root2) {
    if (root2 == nullptr) {
        return true;
    } else if (root1 == nullptr) {
        return false;
    }
    return TopologyIntersection::topology_intersection(root1->left, root2) ||
           TopologyIntersection::topology_intersection(root1->right, root2) || find_intersection(root1, root2);
}

}  // namespace coding_interview_guide::binary_tree::topology_intersection