#include <algorithm>
#include <vector>

#include "04.dynamic_programming/13.min_edit_cost.h"

namespace coding_interview_guide::dynamic_programming::min_edit_cost {

unsigned long MinEditCost::min_cost(const std::string& str1,
                                    const std::string& str2,
                                    unsigned int insert_cost,
                                    unsigned int delete_cost,
                                    unsigned int replace_cost) {
    if (str1.size() == 0 || str2.size() == 0) {
        return insert_cost * (str1.size() + str2.size());
    }
    std::vector<unsigned long> dp_vec(str2.size() + 1, 0L);
    unsigned long temp = 0L;
    unsigned long record = 0L;
    for (size_t i = 1; i < dp_vec.size(); ++i) {
        dp_vec[i] = insert_cost * i;
    }
    for (size_t i = 1; i <= str1.size(); ++i) {
        temp = dp_vec[0];
        dp_vec[0] = delete_cost * i;
        for (size_t j = 1; j < dp_vec.size(); ++j) {
            record = dp_vec[j];
            dp_vec[j] = std::min(dp_vec[j] + delete_cost, dp_vec[j - 1] + insert_cost);
            if (str1[i - 1] == str2[j - 1]) {
                dp_vec[j] = std::min(dp_vec[j], temp);
            } else {
                dp_vec[j] = std::min(dp_vec[j], temp + replace_cost);
            }
            temp = record;
        }
    }
    return dp_vec[dp_vec.size() - 1];
}

}  // namespace coding_interview_guide::dynamic_programming::min_edit_cost
