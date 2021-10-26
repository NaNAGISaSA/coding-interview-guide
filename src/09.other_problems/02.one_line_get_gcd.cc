#include "09.other_problems/02.one_line_get_gcd.h"

namespace coding_interview_guide::other_problems::one_line_get_gcd {

int GetGCD::get(int m, int n) {
    return n == 0 ? m : get(n, m % n);
}

}  // namespace coding_interview_guide::other_problems::one_line_get_gcd
