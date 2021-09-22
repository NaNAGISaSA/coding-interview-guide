#include "05.string/13.parenthese_str.h"

namespace coding_interview_guide::string::parenthese_str {

bool ParentheseStr::is_valid(const std::string& str) {
    long count = 0L;
    for (const auto& character : str) {
        if (character != '(' && character != ')') {
            return false;
        }
        count += character == '(' ? 1L : -1L;
        if (count < 0L) {
            return false;
        }
    }
    return count == 0L;
}

// std::string ParentheseStr::max_valid_str(const std::string& str) {
// }

}  // namespace coding_interview_guide::string::parenthese_str
