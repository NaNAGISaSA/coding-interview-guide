#include <queue>

#include "08.vector_and_matrix/24.shortest_path.h"

namespace coding_interview_guide::vector_and_matrix::shortest_path {

namespace {
struct Cooridnate {
    Cooridnate(size_t r, size_t c) : row(r), column(c) {
    }

    size_t row;
    size_t column;
};
}  // namespace

long ShortestPath::shortest_path(const std::vector<std::vector<unsigned int>>& mat) {
    if (mat.size() == 0 || mat[0].size() == 0 || mat[0][0] == 0) {
        return 0;
    }
    if (mat.size() == 1 && mat[0].size() == 1) {
        return 1;
    }
    size_t row_number = mat.size(), colunm_number = mat[0].size();
    std::vector<std::vector<bool>> visited(row_number, std::vector<bool>(colunm_number, false));
    visited[0][0] = true;
    std::queue<Cooridnate> queue;
    queue.push(Cooridnate(0, 0));
    size_t shortest_path = 1, curr_path_node_num = 1;
    while (queue.size()) {
        Cooridnate curr_element(std::move(queue.front()));
        queue.pop();
        if (curr_element.row != 0 && mat[curr_element.row - 1][curr_element.column] == 1 &&
            !visited[curr_element.row - 1][curr_element.column]) {
            queue.push(Cooridnate(curr_element.row - 1, curr_element.column));
            visited[curr_element.row - 1][curr_element.column] = true;
        }
        if (curr_element.row + 1 != row_number && mat[curr_element.row + 1][curr_element.column] == 1 &&
            !visited[curr_element.row + 1][curr_element.column]) {
            queue.push(Cooridnate(curr_element.row + 1, curr_element.column));
            visited[curr_element.row + 1][curr_element.column] = true;
        }
        if (curr_element.column != 0 && mat[curr_element.row][curr_element.column - 1] == 1 &&
            !visited[curr_element.row][curr_element.column - 1]) {
            queue.push(Cooridnate(curr_element.row, curr_element.column - 1));
            visited[curr_element.row][curr_element.column - 1] = true;
        }
        if (curr_element.column + 1 != colunm_number && mat[curr_element.row][curr_element.column + 1] == 1 &&
            !visited[curr_element.row][curr_element.column + 1]) {
            queue.push(Cooridnate(curr_element.row, curr_element.column + 1));
            visited[curr_element.row][curr_element.column + 1] = true;
        }
        if (--curr_path_node_num == 0) {
            ++shortest_path;
            curr_path_node_num = queue.size();
            if (visited[row_number - 1][colunm_number - 1]) {
                return shortest_path;
            }
        }
    }
    return -1;
}

}  // namespace coding_interview_guide::vector_and_matrix::shortest_path
