#include "04.dynamic_programming/19.jump_game.h"

namespace coding_interview_guide::dynamic_programming::jump_game {

unsigned int JumpGame::steps(const std::vector<unsigned int>& vec) {
    unsigned int step = 0U;
    size_t curr_index = 0, max_index = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (curr_index < i) {
            curr_index = max_index;
            ++step;
        }
        if (i + vec[i] > max_index) {
            max_index = i + vec[i];
        }
    }
    return step;
}

}  // namespace coding_interview_guide::dynamic_programming::jump_game
