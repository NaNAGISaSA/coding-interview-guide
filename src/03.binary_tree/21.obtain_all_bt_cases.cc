#include <numeric>

#include "03.binary_tree/21.obtain_all_bt_cases.h"

namespace coding_interview_guide::binary_tree::obtain_all_bt_cases {

unsigned long ObtainAllBtCases::obtain(unsigned int number) {
    std::vector<unsigned long> sum(number + 1, 0L);
    sum[0] = 1;
    for (unsigned int i = 1; i <= number; ++i) {
        for (unsigned int j = 1; j <= i; ++j) {
            sum[i] += sum[j - 1] * sum[i - j];
        }
    }
    return sum[number];
}

namespace {
Node<int>* clone_tree(Node<int>* head) {
    if (head == nullptr) {
        return nullptr;
    }
    auto head_ = new Node<int>(head->val);
    head_->left = clone_tree(head->left);
    head_->right = clone_tree(head->right);
    return head_;
}

std::vector<Node<int>*> obtain_nodes_internal(unsigned int start, unsigned int end) {
    if (start > end) {
        return {nullptr};
    }
    std::vector<Node<int>*> cases;
    for (unsigned int i = start; i <= end; ++i) {
        Node<int>* head = new Node<int>(i);
        auto left_cases = obtain_nodes_internal(start, i - 1);
        auto right_cases = obtain_nodes_internal(i + 1, end);
        for (auto* left : left_cases) {
            for (auto* right : right_cases) {
                head->left = left;
                head->right = right;
                cases.push_back(clone_tree(head));
            }
        }
    }
    return cases;
}
}  // namespace

std::vector<Node<int>*> ObtainAllBtCases::obtain_nodes(unsigned int number) {
    return obtain_nodes_internal(1, number);
}

}  // namespace coding_interview_guide::binary_tree::obtain_all_bt_cases
