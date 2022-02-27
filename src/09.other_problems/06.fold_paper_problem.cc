#include <iostream>

#include "09.other_problems/06.fold_paper_problem.h"

namespace coding_interview_guide::other_problems::fold_paper_problem {

namespace {
void in_order_traverse(unsigned int n, bool down) {
    if (n == 0) {
        return;
    }
    in_order_traverse(n - 1, true);
    std::cout << (down ? "down" : "up") << std::endl;
    in_order_traverse(n - 1, false);
}
}  // namespace

void FoldPaperProblem::print_crease(unsigned int n) {
    in_order_traverse(n, true);
}

}  // namespace coding_interview_guide::other_problems::fold_paper_problem
