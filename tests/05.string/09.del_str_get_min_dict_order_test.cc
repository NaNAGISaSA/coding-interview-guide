#include <gtest/gtest.h>

#include "05.string/09.del_str_get_min_dict_order.h"

using namespace coding_interview_guide::string::del_str_get_min_dict_order;

TEST(DEL_STR_GET_MIN_DICT_ORDER, DEL_STR_GET_MIN_DICT_ORDER_EXAMPLE_TEST) {
    ASSERT_EQ(GetMinDictOrderStr::process("acbc"), "abc");
    ASSERT_EQ(GetMinDictOrderStr::process("dbcacbca"), "dabc");
    ASSERT_EQ(GetMinDictOrderStr::process("baacbaccac"), "abc");
}
