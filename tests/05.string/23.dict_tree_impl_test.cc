#include <gtest/gtest.h>

#include "05.string/23.dict_tree_impl.h"

using namespace coding_interview_guide::string::dict_tree_impl;

TEST(DICT_TREE_IMPL, DICT_TREE_IMPL_EXAMPLE_TEST) {
    DictTreeImpl impl;
    impl.insert("qwer");
    impl.insert("qwe");
    ASSERT_TRUE(impl.search("qwer"));
    ASSERT_TRUE(impl.search("qwe"));
    ASSERT_FALSE(impl.search("qw"));
    ASSERT_EQ(impl.prefix_number("qw"), 2);
    impl.del("qwer");
    ASSERT_FALSE(impl.search("qwer"));
    ASSERT_EQ(impl.prefix_number("q"), 1);
}
