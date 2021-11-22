#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>

#include "09.other_problems/29.occurrence_top_k.h"

namespace coding_interview_guide::other_problems::occurrence_top_k {

struct Node {
    Node(const std::string& str, unsigned int occurrence) : value(str), occur(occurrence) {
    }

    std::string value;
    unsigned int occur;
};

void OccurrenceTopK::print_top_k(const std::vector<std::string>& vec, unsigned int k) {
    if (vec.size() == 0 || k == 0) {
        return;
    }
    std::unordered_map<std::string, unsigned int> count_map;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (count_map.find(vec[i]) == count_map.end()) {
            count_map[vec[i]] = 1;
        } else {
            ++count_map[vec[i]];
        }
    }
    auto cmp = [](const Node& node1, const Node& node2) { return node1.occur > node2.occur; };
    std::priority_queue<Node, std::vector<Node>, decltype(cmp)> min_heap(cmp);
    for (auto it = count_map.begin(); it != count_map.end(); ++it) {
        if (min_heap.size() < k) {
            min_heap.push(Node(it->first, it->second));
        } else if (it->second > min_heap.top().occur) {
            min_heap.pop();
            min_heap.push(Node(it->first, it->second));
        }
    }
    std::stack<Node> print_stack;
    while (min_heap.size()) {
        print_stack.push(std::move(min_heap.top()));
        min_heap.pop();
    }
    unsigned int index = 1U;
    while (print_stack.size()) {
        std::cout << "No." << index++ << ": " << print_stack.top().value << ", times: " << print_stack.top().occur
                  << std::endl;
        print_stack.pop();
    }
}

}  // namespace coding_interview_guide::other_problems::occurrence_top_k
