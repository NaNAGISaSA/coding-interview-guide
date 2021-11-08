#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "09.other_problems/14.count_path_arr.h"

using namespace coding_interview_guide::other_problems::count_path_arr;

TEST(COUNT_PATH_ARR, COUNT_PATH_ARR_EXAMPLE_TEST) {
    std::vector<int> path{9, 1, 4, 9, 0, 4, 8, 9, 0, 1};
    CountPathArr::count_path_arr(path);
    ASSERT_THAT(path, testing::ElementsAre(1, 1, 3, 2, 3, 0, 0, 0, 0, 0));
}

TEST(COUNT_PATH_ARR, COUNT_PATH_ARR_BFS_EXAMPLE_TEST) {
    std::vector<int> path{9, 1, 4, 9, 0, 4, 8, 9, 0, 1};
    CountPathArr::common_bfs(path);
    ASSERT_THAT(path, testing::ElementsAre(1, 1, 3, 2, 3, 0, 0, 0, 0, 0));
}
