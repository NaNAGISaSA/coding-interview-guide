#include <queue>
#include <unordered_map>
#include <unordered_set>

#include "09.other_problems/28.arr_sum_top_k.h"

namespace coding_interview_guide::other_problems::arr_sum_top_k {

struct Node {
    Node(size_t idx1, size_t idx2, int val) : index1(idx1), index2(idx2), value(val) {
    }

    size_t index1;
    size_t index2;
    int value;
};

std::vector<int> ArrSumTopK::topk(const std::vector<int>& vec1, const std::vector<int>& vec2, unsigned int k) {
    size_t vec1_size = vec1.size(), vec2_size = vec2.size();
    if (vec1_size == 0 || vec2_size == 0 || k == 0 || k > vec1_size + vec2_size) {
        return {};
    }

    auto cmp = [](const Node& node1, const Node& node2) { return node1.value < node2.value; };
    std::priority_queue<Node, std::vector<Node>, decltype(cmp)> max_heap(cmp);
    max_heap.push(Node(vec1_size - 1, vec2_size - 1, vec1[vec1_size - 1] + vec2[vec2_size - 1]));

    std::unordered_map<size_t, std::unordered_set<size_t>> record_node({{vec1_size - 1, {vec2_size - 1}}});

    auto add_node = [&record_node, &max_heap, &vec1, &vec2](size_t index1, size_t index2) {
        record_node[index1].insert(index2);
        max_heap.push(Node(index1, index2, vec1[index1] + vec2[index2]));
    };

    std::vector<int> result;
    while (result.size() != k) {
        result.push_back(max_heap.top().value);
        Node node = std::move(max_heap.top());
        max_heap.pop();
        if (node.index2 != 0 && record_node[node.index1].find(node.index2 - 1) == record_node[node.index1].end()) {
            add_node(node.index1, node.index2 - 1);
        }
        if (node.index1 != 0) {
            if (record_node.find(node.index1 - 1) == record_node.end()) {
                record_node.insert(std::make_pair<size_t, std::unordered_set<size_t>>(node.index1 - 1, {}));
                add_node(node.index1 - 1, node.index2);
            } else if (record_node[node.index1 - 1].find(node.index2) == record_node[node.index1 - 1].end()) {
                add_node(node.index1 - 1, node.index2);
            }
        }
    }
    return result;
}

}  // namespace coding_interview_guide::other_problems::arr_sum_top_k
