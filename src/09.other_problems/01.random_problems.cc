#include <random>

#include "09.other_problems/01.random_problems.h"

namespace coding_interview_guide::other_problems::random_problems {

namespace {
int random_internal(int begin, int end) {
    std::mt19937 generator(1);
    std::uniform_int_distribution<int> distrib(begin, end);
    return distrib(generator);
}

int random_one_to_five() {
    return random_internal(1, 5);
}

int random01p() {
    return random_internal(0, 1);
}
}  // namespace

int RandomProblems::random_one_to_seven() {
    int rand_num = 0;
    do {
        rand_num = 5 * (random_one_to_five() - 1) + random_one_to_five() - 1;  // [0, 24] -> [0, 20]
    } while (rand_num > 20);
    return 1 + rand_num % 7;
}

int RandomProblems::random_one_to_six() {
    auto equal01 = []() {
        int num = 0;
        do {
            num = random01p();
        } while (num == random01p());
        return num;
    };
    auto equal03 = [&equal01]() { return equal01() + 2 * equal01(); };
    int num = 0;
    do {
        num = equal03() + equal03() * 4;
    } while (num > 11);
    return 1 + num % 6;
}

}  // namespace coding_interview_guide::other_problems::random_problems
