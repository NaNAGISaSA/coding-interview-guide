#include <iostream>

#include "09.other_problems/06.fold_paper_problem.h"

namespace coding_interview_guide::other_problems::fold_paper_problem {

namespace {
void in_order_traverse(unsigned int curr_index, unsigned int max_index, bool down) {
    if (curr_index > max_index) {
        return;
    }
    in_order_traverse(2 * curr_index + 1, max_index, true);
    std::cout << (down ? "down" : "up") << std::endl;
    in_order_traverse(2 * curr_index + 2, max_index, false);
}
}  // namespace

void FoldPaperProblem::print_crease(unsigned int n) {
    if (n == 0) {
        return;
    }
    in_order_traverse(0, (1 << n) - 2, true);
}

}  // namespace coding_interview_guide::other_problems::fold_paper_problem
