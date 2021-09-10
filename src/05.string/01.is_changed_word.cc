#include <unordered_map>

#include "05.string/01.is_changed_word.h"

namespace coding_interview_guide::string::is_changed_word {

bool IsChangedWord::is_changed_word(const std::string& str1, const std::string& str2) {
    std::unordered_map<char, unsigned int> map;
    for (auto& character : str1) {
        if (map.count(character)) {
            ++map[character];
        } else {
            map[character] = 1U;
        }
    }
    for (auto& character : str2) {
        if (map.count(character)) {
            --map[character];
        } else {
            return false;
        }
    }
    for (auto it = map.begin(); it != map.end(); ++it) {
        if (it->second != 0U) {
            return false;
        }
    }
    return true;
}

}  // namespace coding_interview_guide::string::is_changed_word
