#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "03.binary_tree/20.obtain_post_order_arr.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::obtain_post_order_arr;

TEST(OBTAIN_POST_ORDER_ARR, OBTAIN_POST_ORDER_ARR_EXAMPLE_TEST) {
    std::vector<int> pre{1, 2, 4, 5, 3, 6, 7};
    std::vector<int> in{4, 2, 5, 1, 6, 3, 7};
    auto result = ObtainPostOrderArr::obtain(pre, in);
    ASSERT_THAT(result, testing::ElementsAre(4, 5, 2, 6, 7, 3, 1));
    std::vector<int> pre2{1, 2, 4, 3, 5};
    std::vector<int> in2{4, 2, 1, 3, 5};
    auto result2 = ObtainPostOrderArr::obtain(pre2, in2);
    ASSERT_THAT(result2, testing::ElementsAre(4, 2, 5, 3, 1));
}
