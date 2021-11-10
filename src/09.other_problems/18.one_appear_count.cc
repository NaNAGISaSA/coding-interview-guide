#include "09.other_problems/18.one_appear_count.h"

namespace coding_interview_guide::other_problems::one_appear_count {

unsigned int OneAppearCount::count(unsigned int num) {
    auto get_count = [](unsigned int number) {
        unsigned int res = 0;
        while (number != 0) {
            if (number % 10 == 1) {
                ++res;
            }
            number /= 10;
        }
        return res;
    };
    unsigned int result = 0;
    for (unsigned int i = 1; i <= num; ++i) {
        result += get_count(i);
    }
    return result;
}

// unsigned int OneAppearCount::count_opt(unsigned int num) {
// }

}  // namespace coding_interview_guide::other_problems::one_appear_count
