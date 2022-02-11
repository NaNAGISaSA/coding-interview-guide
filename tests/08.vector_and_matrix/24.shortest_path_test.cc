#include <gtest/gtest.h>

#include "08.vector_and_matrix/24.shortest_path.h"

using namespace coding_interview_guide::vector_and_matrix::shortest_path;

TEST(SHORTEST_PATH, SHORTEST_PATH_EXAMPLE_TEST) {
    ASSERT_EQ(ShortestPath::shortest_path({{1}}), 1);
    ASSERT_EQ(ShortestPath::shortest_path({{1, 1, 1, 1}}), 4);
    ASSERT_EQ(ShortestPath::shortest_path({{1}, {1}, {1}, {1}}), 4);
    ASSERT_EQ(ShortestPath::shortest_path({{1, 0, 1, 1, 1}, {1, 0, 1, 0, 1}, {1, 1, 1, 0, 1}, {0, 0, 0, 0, 1}}), 12);
    ASSERT_EQ(ShortestPath::shortest_path({{1, 1, 0, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {0, 0, 0, 0, 1}}), 8);
    ASSERT_EQ(ShortestPath::shortest_path({{1, 1, 0, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 0, 0}, {0, 0, 0, 1, 1}}), -1);
}
