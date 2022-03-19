#include <queue>
#include <unordered_map>
#include <unordered_set>

#include "09.other_problems/14.count_path_arr.h"

namespace coding_interview_guide::other_problems::count_path_arr {

void CountPathArr::count_path_arr(std::vector<int>& path) {
    if (path.size() == 0) {
        return;
    }

    auto path_to_count_arr = [&path]() {
        int cap = -1;
        for (int i = 0; i < static_cast<int>(path.size()); ++i) {
            if (path[i] == i) {
                cap = i;
                break;
            }
        }
        for (int i = 0; i < static_cast<int>(path.size()); ++i) {
            int curr_city = i;
            int next_city = path[i];
            int tmp = 0;
            while (next_city >= 0 && next_city != cap) {
                tmp = curr_city;
                curr_city = next_city;
                next_city = path[curr_city];
                if (next_city >= 0) {
                    path[curr_city] = tmp;
                } else {
                    curr_city = tmp;
                }
            }
            int distance = next_city == cap ? 0 : next_city;
            while (curr_city != i) {
                tmp = path[curr_city];
                path[curr_city] = --distance;
                curr_city = tmp;
            }
            if (path[curr_city] >= 0) {
                path[curr_city] = distance - 1;
            }
        }
        path[cap] = 0;
    };

    auto get_total_count = [&path]() {
        for (int i = 0; i < static_cast<int>(path.size()); ++i) {
            int path_num = path[i];
            int tmp = 0;
            while (path_num < 0) {
                tmp = path_num;
                if (path[-1 * path_num] < 0) {
                    path_num = path[-1 * path_num];
                    path[-1 * tmp] = 1;
                } else {
                    ++path[-1 * path_num];
                    path[i] = 0;
                    break;
                }
            }
        }
        path[0] = 1;
    };

    path_to_count_arr();
    get_total_count();
}

void CountPathArr::common_bfs(std::vector<int>& path) {
    if (path.size() == 0) {
        return;
    }
    std::unordered_map<int, std::vector<int>> graph;
    int cap = -1;
    for (int i = 0; i < static_cast<int>(path.size()); ++i) {
        if (graph.find(path[i]) == graph.end()) {
            graph.insert({path[i], {i}});
        } else {
            graph[path[i]].push_back(i);
        }
        if (path[i] == i) {
            cap = i;
        }
        path[i] = 0;
    }
    std::unordered_set<int> visited;
    visited.insert(cap);
    std::queue<int> queue;
    queue.push(cap);
    size_t distance = 0;
    size_t curr_distance_city_number = 1;
    while (queue.size()) {
        int city = queue.front();
        queue.pop();
        ++path[distance];
        if (graph.find(city) != graph.end()) {
            for (auto& city_num : graph[city]) {
                if (visited.find(city_num) == visited.end()) {
                    queue.push(city_num);
                    visited.insert(city_num);
                }
            }
        }
        if (--curr_distance_city_number == 0) {
            curr_distance_city_number = queue.size();
            ++distance;
        }
    }
}

}  // namespace coding_interview_guide::other_problems::count_path_arr
