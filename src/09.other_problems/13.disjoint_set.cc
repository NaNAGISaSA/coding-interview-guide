#include <unordered_map>

#include "09.other_problems/13.disjoint_set.h"

namespace coding_interview_guide::other_problems::disjoint_set {

template <typename T>
struct Node {
    Node(const T& val) : value(val) {
    }

    Node(T&& val) : value(std::move(val)) {
    }

    T value;
};

template struct Node<int>;

struct DisjointSet::Impl {
public:
    Impl(const std::vector<int>& vec) : element_map{}, father_map{}, rank_map{} {
        for (auto& number : vec) {
            element_map.insert(std::make_pair(number, std::make_unique<Node<int>>(number)));
            father_map.insert(std::make_pair(element_map[number].get(), element_map[number].get()));
            rank_map.insert(std::make_pair(element_map[number].get(), 1));
        }
    }

    bool is_same_set(int a, int b) {
        if (element_map.find(a) == element_map.end() || element_map.find(b) == element_map.end()) {
            return false;
        }
        return get_rep_node(a) == get_rep_node(b);
    }

    void union_set(int a, int b) {
        if (element_map.find(a) == element_map.end() || element_map.find(b) == element_map.end()) {
            return;
        }
        Node<int>* rep_node_a = get_rep_node(a);
        Node<int>* rep_node_b = get_rep_node(b);
        if (rep_node_a != rep_node_b) {
            if (rank_map[rep_node_a] > rank_map[rep_node_b]) {
                father_map[rep_node_b] = rep_node_a;
                rank_map[rep_node_a] += rank_map[rep_node_b];
                rank_map.erase(rep_node_b);
            } else {
                father_map[rep_node_a] = rep_node_b;
                rank_map[rep_node_b] += rank_map[rep_node_a];
                rank_map.erase(rep_node_a);
            }
        }
    }

private:
    Node<int>* get_rep_node(int number) {
        std::vector<Node<int>*> path;
        Node<int>* rep_node = element_map[number].get();
        while (father_map[rep_node] != rep_node) {
            path.push_back(rep_node);
            rep_node = father_map[rep_node];
        }
        for (auto* node : path) {
            father_map[node] = rep_node;
        }
        return rep_node;
    }

    std::unordered_map<int, std::unique_ptr<Node<int>>> element_map;
    std::unordered_map<Node<int>*, Node<int>*> father_map;
    std::unordered_map<Node<int>*, int> rank_map;
};

DisjointSet::DisjointSet(const std::vector<int>& vec) : pimpl(std::make_unique<Impl>(vec)) {
}

DisjointSet::~DisjointSet() = default;

bool DisjointSet::is_same_set(int a, int b) {
    return pimpl->is_same_set(a, b);
}

void DisjointSet::union_set(int a, int b) {
    pimpl->union_set(a, b);
}

}  // namespace coding_interview_guide::other_problems::disjoint_set
