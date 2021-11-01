#include <algorithm>
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

size_t random1n(size_t n) {
    return static_cast<size_t>(random_internal(1, static_cast<int>(n)));
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

/*
蓄水池算法：
1. 处理1~k号球时，直接放进袋子里；
2. 处理第i号球时（i>k）时，以k/i的概率决定是否将当前球放入袋子中；如果决定放入，则随机
将当前袋中的一个球取出丢弃。

使用如上算法，假设当前放置到第x号球，其被放入的概率为k/x；
对于已经被放入袋子中的球y，其在x之后依旧在袋子中的概率为：k/y * y/y+1 * ... * x-1/x = k/x.
*/
std::vector<size_t> ReservoirAlgorithm::select(size_t k, size_t n) {
    if (k == 0 || n == 0) {
        return {};
    }
    std::vector<size_t> result(std::min(k, n), 0);
    for (size_t i = 1; i <= result.size(); ++i) {
        result[i] = i;
    }
    for (size_t i = k + 1; i <= n; ++i) {
        if (random1n(i) <= k) {
            result[random1n(k) - 1] = i;
        }
    }
    return result;
}

}  // namespace coding_interview_guide::other_problems::random_problems
