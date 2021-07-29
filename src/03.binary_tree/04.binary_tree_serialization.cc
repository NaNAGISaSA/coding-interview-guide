#include "03.binary_tree/04.binary_tree_serialization.h"

namespace coding_interview_guide::binary_tree::binary_tree_serialization {

std::string null_str = "#!";

std::string BinaryTreeSerial::pre_order_serial(Node<int>* root) {
    return root == nullptr ?
               null_str :
               std::to_string(root->val) + "!" + pre_order_serial(root->left) + pre_order_serial(root->right);
}

}  // namespace coding_interview_guide::binary_tree::binary_tree_serialization
