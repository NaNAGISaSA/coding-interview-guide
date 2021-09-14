#include "05.string/06.find_str_in_order_vec.h"

namespace coding_interview_guide::string::find_str_in_order_vec {

long FindStrInOrderVec::find_index(const std::vector<std::string>& vec, std::string&& str) {
    if (vec.size() == 0 || str == "null") {
        return -1;
    }
    long left = 0, right = vec.size() - 1, middle = 0;
    long result = -1;
    while (left <= right) {
        middle = (left + right) / 2;
        if (vec[middle] == str) {
            right = middle - 1;
            result = middle;
        } else if (vec[middle] != "null") {
            if (vec[middle] < str) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        } else {
            long internal_middle = middle;
            while (left <= internal_middle && vec[internal_middle] == "null") {
                --internal_middle;
            }
            if (left > internal_middle || vec[internal_middle] < str) {
                left = middle + 1;
            } else {
                if (vec[internal_middle] == str) {
                    result = internal_middle;
                }
                right = middle - 1;
            }
        }
    }
    return result;
}

}  // namespace coding_interview_guide::string::find_str_in_order_vec
