#include "02.linked_list/17.strange_delete_node_method.h"

namespace coding_interview_guide::linked_list::strange_delete_node_method {

void StrangeDeleteNodeMethod::delete_node(Node<int>* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

}  // namespace coding_interview_guide::linked_list::strange_delete_node_method