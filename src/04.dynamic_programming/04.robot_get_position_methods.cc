#include <vector>

#include "04.dynamic_programming/04.robot_get_position_methods.h"

namespace coding_interview_guide::dynamic_programming::robot_get_position_methods {

unsigned long RobotGetPositionMethod::method_number(const unsigned int pos_number,
                                                    const unsigned int init_pos,
                                                    const unsigned int steps,
                                                    const unsigned int final_pos) {
    std::vector<std::vector<long>> vec(steps + 1, std::vector<long>(pos_number, 0L));
    for (unsigned int i = 0; i < pos_number; ++i) {
        vec[0][i] = i == final_pos - 1 ? 1L : 0L;
    }
    for (unsigned int i = 1; i <= steps; ++i) {
        for (unsigned int j = 0; j < pos_number; ++j) {
            if (j == 0) {
                vec[i][j] = vec[i - 1][j + 1];
            } else if (j == pos_number - 1) {
                vec[i][j] = vec[i - 1][j - 1];
            } else {
                vec[i][j] = (vec[i - 1][j - 1] + vec[i - 1][j + 1]) % static_cast<int>(1e+9 + 7);
            }
        }
    }
    return vec[steps][init_pos - 1];
}

}  // namespace coding_interview_guide::dynamic_programming::robot_get_position_methods