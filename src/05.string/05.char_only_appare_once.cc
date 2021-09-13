#include <unordered_set>

#include "05.string/05.char_only_appare_once.h"

namespace coding_interview_guide::string::char_only_appare_once {

bool CharOnlyAppareOnce::appare_once(const std::string& str) {
    std::unordered_set<char> set(str.begin(), str.end());
    return str.size() == set.size();
}

bool CharOnlyAppareOnce::appare_once_time_opt(const std::string& str) {
    std::unordered_set<char> set;
    for (auto& character : str) {
        if (set.find(character) != set.end()) {
            return false;
        }
        set.insert(character);
    }
    return true;
}

}  // namespace coding_interview_guide::string::char_only_appare_once
