#include <gtest/gtest.h>

#include "03.binary_tree/21.obtain_all_bt_cases.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::obtain_all_bt_cases;

TEST(OBTAIN_ALL_BT_CASES, OBTAIN_ALL_BT_CASES_EXAMPLE_TEST) {
    ASSERT_EQ(ObtainAllBtCases::obtain(7), 429);
    ASSERT_EQ(ObtainAllBtCases::obtain(10), 16796);
}
