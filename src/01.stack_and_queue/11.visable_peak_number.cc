#include "01.stack_and_queue/11.visable_peak_number.h"

namespace coding_interview_guide::stack_and_queue::visable_peak_number {

size_t VisablePeakNumber::get_visable_peak_number(const std::vector<int>& input) {
    const size_t input_size = input.size();
    return input_size == 0 || input_size == 1 ? 0 : 2 * (input_size - 2) + 1;
}

}  // namespace coding_interview_guide::stack_and_queue::visable_peak_number