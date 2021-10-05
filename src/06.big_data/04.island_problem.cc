#include <unordered_map>
#include <unordered_set>

#include "06.big_data/04.island_problem.h"

namespace coding_interview_guide::big_data::island_problem {

namespace {
bool not_in_cache(const size_t row,
                  const size_t column,
                  const std::unordered_map<size_t, std::unordered_set<size_t>>& cache) {
    if (cache.find(row) == cache.end()) {
        return true;
    }
    return cache.at(row).find(column) == cache.at(row).end();
}

void record_island(const size_t row,
                   const size_t column,
                   const std::vector<std::vector<unsigned int>>& island,
                   std::unordered_map<size_t, std::unordered_set<size_t>>& cache) {
    if (row >= island.size() || column >= island[0].size()) {
        return;
    }
    if (island[row][column] == 1 && not_in_cache(row, column, cache)) {
        if (cache.find(row) == cache.end()) {
            cache.insert({row, {column}});
        } else {
            cache[row].insert(column);
        }
        record_island(row - 1, column, island, cache);
        record_island(row, column - 1, island, cache);
        record_island(row, column + 1, island, cache);
        record_island(row + 1, column, island, cache);
    }
}
}  // namespace

unsigned int IslandProblem::island_number(const std::vector<std::vector<unsigned int>>& island) {
    if (island.size() == 0) {
        return 0U;
    }
    std::unordered_map<size_t, std::unordered_set<size_t>> cache;
    unsigned int result = 0U;
    for (size_t i = 0; i < island.size(); ++i) {
        for (size_t j = 0; j < island[0].size(); ++j) {
            if (island[i][j] == 1 && not_in_cache(i, j, cache)) {
                ++result;
                record_island(i, j, island, cache);
            }
        }
    }
    return result;
}

}  // namespace coding_interview_guide::big_data::island_problem
