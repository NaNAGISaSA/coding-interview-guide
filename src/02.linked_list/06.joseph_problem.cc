#include "02.linked_list/06.joseph_problem.h"

namespace coding_interview_guide::linked_list::joseph_problem {

unsigned int JosephProblem::live_man_number(Node<int>* head, unsigned int m) {
    unsigned int death_number = 1;
    Node<int>* prev = head;
    while (prev->next != head) {
        prev = prev->next;
    }
    while (head->next != head) {
        if (death_number == m) {
            death_number = 1;
            head = head->next;
            prev->next = head;
        } else {
            ++death_number;
            prev = head;
            head = head->next;
        }
    }
    return static_cast<unsigned int>(head->val);
}

}  // namespace coding_interview_guide::linked_list::joseph_problem
