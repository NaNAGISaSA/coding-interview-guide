#include "04.dynamic_programming/03.change_money.h"

namespace coding_interview_guide::dynamic_programming::change_money {

unsigned int ChangeMoney::min_currency(const std::vector<unsigned int>& vec, unsigned int aim) {
    return static_cast<unsigned int>(vec.size()) + aim;
}

}  // namespace coding_interview_guide::dynamic_programming::change_money
