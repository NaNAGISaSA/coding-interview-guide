#include <vector>

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

}  // namespace coding_interview_guide::binary_tree::obtain_all_bt_cases
