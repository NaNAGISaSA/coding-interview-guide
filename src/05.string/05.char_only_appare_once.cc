#include <unordered_set>
#include <vector>

#include "05.string/05.char_only_appare_once.h"

namespace coding_interview_guide::string::char_only_appare_once {

bool CharOnlyAppareOnce::appare_once_time_opt(std::string& str) {
    std::unordered_set<char> set;
    for (auto& character : str) {
        if (set.find(character) != set.end()) {
            return false;
        }
        set.insert(character);
    }
    return true;
}

bool CharOnlyAppareOnce::appare_once_space_opt(std::string& str) {
    if (str.size() == 0) {
        return true;
    }

    auto heapify = [&str](int root, int heap_size) {
        int largest = root, left = 2 * root + 1, right = 2 * root + 2;
        while (left < heap_size) {
            if (str[left] > str[largest]) {
                largest = left;
            }
            if (right < heap_size && str[right] > str[largest]) {
                largest = right;
            }
            if (largest == root) {
                break;
            } else {
                std::swap(str[largest], str[root]);
            }
            root = largest;
            left = 2 * root + 1;
            right = 2 * root + 2;
        }
    };

    int str_size = static_cast<int>(str.size());
    for (int root = (str_size - 2) / 2; root >= 0; --root) {
        heapify(root, str_size);
    }
    for (int heap_size = str_size - 1; heap_size > 0; --heap_size) {
        std::swap(str[heap_size], str[0]);
        heapify(0, heap_size);
    }

    for (int i = 1; i < str_size; ++i) {
        if (str[i] == str[i - 1]) {
            return false;
        }
    }
    return true;
}

}  // namespace coding_interview_guide::string::char_only_appare_once
