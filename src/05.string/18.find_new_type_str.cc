#include "05.string/18.find_new_type_str.h"

namespace coding_interview_guide::string::find_new_type_str {

std::string FindNewTypeStr::find_str(const std::string& str, size_t index) {
    size_t str_size = str.size();
    if (str_size == 0 || index >= str_size) {
        return "";
    }
    if (index == 0) {
        return str[index] >= 'a' ? str.substr(index, 1) : str.substr(index, 2);
    }
    size_t uppper_char_count = 0;
    for (size_t i = index - 1; i < index; --i) {
        if (str[i] >= 'a') {
            break;
        }
        ++uppper_char_count;
    }
    return uppper_char_count % 2 == 0 ? str.substr(index, str[index] >= 'a' ? 1 : 2) : str.substr(index - 1, 2);
}

}  // namespace coding_interview_guide::string::find_new_type_str
