#include <algorithm>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>

#include "05.string/11.min_change_route.h"

namespace coding_interview_guide::string::min_change_route {

namespace {
std::unordered_map<std::string, std::vector<std::string>> get_adj_list_graph(
    const std::unordered_set<std::string>& nodes,
    const size_t str_size) {
    std::unordered_map<std::string, std::vector<std::string>> graph;
    for (const auto& str : nodes) {
        graph.insert({str, {}});
        for (size_t i = 0; i < str_size; ++i) {
            std::string str_copy = str;
            for (char c = 'a'; c <= 'z'; ++c) {
                str_copy[i] = c;
                if (nodes.find(str_copy) != nodes.end() && str_copy != str) {
                    graph[str].push_back(str_copy);
                }
            }
        }
    }
    return graph;
}

std::unordered_map<std::string, size_t> get_nodes_distance(
    const std::unordered_map<std::string, std::vector<std::string>>& graph,
    const std::string& start) {
    std::unordered_map<std::string, size_t> node_distance{{start, 0}};
    std::queue<std::string> unvisited;
    std::unordered_set<std::string> visited;
    unvisited.push(start);
    while (unvisited.size()) {
        std::string current = std::move(unvisited.front());
        unvisited.pop();
        visited.insert(current);
        for (const std::string& node : graph.at(current)) {
            if (visited.find(node) == visited.end()) {
                unvisited.push(node);
                node_distance.insert({node, node_distance[current] + 1});
            }
        }
    }
    return node_distance;
}

void get_routes(const std::unordered_map<std::string, std::vector<std::string>>& graph,
                const std::unordered_map<std::string, size_t>& distance,
                const std::string& start,
                const std::string& to,
                const size_t max_route_len,
                std::vector<std::string>& current_route,
                std::vector<std::string>& result) {
    if (distance.at(start) > max_route_len) {
        return;
    }
    if (start == to) {
        std::string str("");
        for (size_t i = 0; i < current_route.size(); ++i) {
            str = str + current_route[i] + " -> ";
        }
        str = str + start + "\n";
        result.push_back(std::move(str));
    } else {
        current_route.push_back(start);
        for (const auto& node : graph.at(start)) {
            if (distance.at(start) + 1 == distance.at(node)) {
                get_routes(graph, distance, node, to, max_route_len, current_route, result);
            }
        }
        current_route.pop_back();
    }
}

std::string sort_result(std::vector<std::string>& route) {
    std::sort(route.begin(), route.end());
    std::string result("");
    for (auto& str : route) {
        result += std::move(str);
    }
    return result;
}
}  // namespace

std::string MinChangeRoute::min_route(const std::vector<std::string>& vec,
                                      const std::string& start,
                                      const std::string& to) {
    if (start.size() != to.size() || start.size() == 0) {
        return "";
    }
    // step1. construct adjacency list graph
    std::unordered_set<std::string> nodes(vec.begin(), vec.end());
    nodes.insert(start);
    auto graph = get_adj_list_graph(nodes, start.size());
    // step2. get all nodes min distance using bfs
    auto node_distance = get_nodes_distance(graph, start);
    if (node_distance.find(to) == node_distance.end()) {
        return "";
    }
    // step3. get all routes using dfs(can also use bfs)
    size_t max_len = node_distance[to];
    std::vector<std::string> route, internal_route;
    get_routes(graph, node_distance, start, to, max_len, internal_route, route);
    return sort_result(route);
}

}  // namespace coding_interview_guide::string::min_change_route