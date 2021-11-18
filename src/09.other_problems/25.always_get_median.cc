#include <functional>
#include <queue>
#include <vector>

#include "09.other_problems/25.always_get_median.h"

namespace coding_interview_guide::other_problems::median_holder {

struct MedianHolder::Impl {
    Impl() : max_heap{}, min_heap{} {
    }

    void add_number(int num) {
        if (max_heap.size() == 0) {
            max_heap.push(num);
            return;
        }
        if (num >= max_heap.top()) {
            min_heap.push(num);
        } else {
            max_heap.push(num);
        }
        if (max_heap.size() - min_heap.size() == 2) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        } else if (min_heap.size() - max_heap.size() == 2) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }

    int get_median() const {
        if (max_heap.size() == 0) {
            return -1;
        }
        if (max_heap.size() == min_heap.size()) {
            return (max_heap.top() + min_heap.top()) / 2;
        } else {
            return max_heap.size() > min_heap.size() ? max_heap.top() : min_heap.top();
        }
    }

private:
    std::priority_queue<int, std::vector<int>, std::less<int>> max_heap;
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;
};

MedianHolder::MedianHolder() : pimpl(std::make_unique<Impl>()) {
}

MedianHolder::~MedianHolder() = default;

void MedianHolder::add_number(int num) {
    pimpl->add_number(num);
}

int MedianHolder::get_median() const {
    return pimpl->get_median();
}

}  // namespace coding_interview_guide::other_problems::median_holder
