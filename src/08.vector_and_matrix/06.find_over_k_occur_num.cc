#include <iostream>
#include <unordered_map>

#include "08.vector_and_matrix/06.find_over_k_occur_num.h"

namespace coding_interview_guide::vector_and_matrix::find_over_k_occur_num {

void FindOccurNum::find_over_half_num(const std::vector<int>& vec) {
    if (vec.size() == 0) {
        std::cout << "No";
        return;
    }
    int curr_num = 0;
    size_t times = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (times == 0) {
            curr_num = vec[i];
            ++times;
        } else if (vec[i] == curr_num) {
            ++times;
        } else {
            --times;
        }
    }
    times = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == curr_num) {
            ++times;
        }
    }
    if (2 * times > vec.size()) {
        std::cout << curr_num;
    } else {
        std::cout << "No";
    }
}

void FindOccurNum::find_over_n_div_k_num(const std::vector<int>& vec, unsigned int k) {
    if (vec.size() == 0) {
        return;
    }
    std::unordered_map<int, unsigned int> count_map;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (count_map.find(vec[i]) != count_map.end()) {
            ++count_map[vec[i]];
            continue;
        }
        count_map.insert({vec[i], 1U});
        if (count_map.size() == k) {
            for (auto it = count_map.begin(); it != count_map.end();) {
                if (it->second == 1U) {
                    it = count_map.erase(it);
                } else {
                    --(it->second);
                    ++it;
                }
            }
        }
    }
    for (auto it = count_map.begin(); it != count_map.end(); ++it) {
        it->second = 0U;
    }
    for (size_t i = 0; i < vec.size(); ++i) {
        if (count_map.find(vec[i]) != count_map.end()) {
            ++count_map[vec[i]];
        }
    }
    bool has_number = false;
    for (auto it = count_map.begin(); it != count_map.end(); ++it) {
        if (k * it->second > vec.size()) {
            std::cout << it->first << " ";
            has_number = true;
        }
    }
    if (!has_number) {
        std::cout << "No";
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::find_over_k_occur_num
