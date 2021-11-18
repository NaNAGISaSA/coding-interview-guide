#include <iostream>
#include <unordered_set>

#include "09.other_problems/24.print_message_struct.h"

namespace coding_interview_guide::other_problems::print_message_struct {

struct PrintMessageStruct::Impl {
    Impl() : set{}, pos{0} {
    }

    void receive(unsigned int num) {
        set.insert(num);
        if (num == pos + 1) {
            std::cout << num;
            set.erase(num++);
            ++pos;
            while (set.find(num) != set.end()) {
                std::cout << ", " << num;
                set.erase(num++);
                ++pos;
            }
            std::cout << std::endl;
        }
    }

private:
    std::unordered_set<unsigned int> set;
    unsigned int pos;
};

PrintMessageStruct::PrintMessageStruct() : pimpl(std::make_unique<Impl>()) {
}

PrintMessageStruct ::~PrintMessageStruct() = default;

void PrintMessageStruct::receive(unsigned int num) {
    pimpl->receive(num);
}

}  // namespace coding_interview_guide::other_problems::print_message_struct
