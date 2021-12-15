#include "02.linked_list/01.ordered_linked_lists_public_parts.h"

namespace coding_interview_guide::linked_list::ordered_linked_list_public_part {

std::vector<int> LinkedListPublicPart::find_public_part(const Node<int>* head1, const Node<int>* head2) {
    std::vector<int> result;
    int head1_val = 0, head2_val = 0;
    while (head1 != nullptr && head2 != nullptr) {
        head1_val = head1->val;
        head2_val = head2->val;
        if (head1_val == head2_val) {
            result.push_back(head1_val);
            head1 = head1->next;
            head2 = head2->next;
        } else if (head1_val > head2_val) {
            head2 = head2->next;
        } else {
            head1 = head1->next;
        }
    }
    return result;
}

}  // namespace coding_interview_guide::linked_list::ordered_linked_list_public_part
