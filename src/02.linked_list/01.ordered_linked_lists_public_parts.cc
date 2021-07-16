#include "02.linked_list/01.ordered_linked_lists_public_parts.h"

namespace coding_interview_guide::linked_list::ordered_linked_list_public_part {

std::vector<int> LinkedListPublicPart::find_public_part(const Node<int>* head1, const Node<int>* head2) {
    std::vector<int> result;
    int head1_val, head2_val;
    const Node<int>*curr_head1 = head1, *curr_head2 = head2;
    while (curr_head1 != nullptr && curr_head2 != nullptr) {
        head1_val = curr_head1->val;
        head2_val = curr_head2->val;
        if (head1_val == head2_val) {
            result.push_back(head1_val);
            curr_head1 = curr_head1->next;
            curr_head2 = curr_head2->next;
        } else if (head1_val > head2_val) {
            curr_head2 = curr_head2->next;
        } else {
            curr_head1 = curr_head1->next;
        }
    }
    return result;
}

}  // namespace coding_interview_guide::linked_list::ordered_linked_list_public_part
