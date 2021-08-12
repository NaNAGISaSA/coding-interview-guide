#include "03.binary_tree/15.reconstruct_bst_using_in_order_arr.h"

namespace coding_interview_guide::binary_tree::reconstruct_bst_using_in_order_arr {

Node<int>* reconstruct_internal(const std::vector<int>& array, size_t start, size_t end) {
    if (start == end) {
        return nullptr;
    }
    size_t middle = (start + end) / 2;
    Node<int>* root = new Node<int>(array[middle]);
    root->left = reconstruct_internal(array, start, middle);
    root->right = reconstruct_internal(array, middle + 1, end);
    return root;
}

const Node<int>* ReconstructBstUsingInOrderArr::reconstruct(const std::vector<int>& array) {
    return reconstruct_internal(array, 0, array.size());
}

}  // namespace coding_interview_guide::binary_tree::reconstruct_bst_using_in_order_arr
