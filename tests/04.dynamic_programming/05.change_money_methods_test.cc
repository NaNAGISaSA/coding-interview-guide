#include <gtest/gtest.h>

#include "04.dynamic_programming/05.change_money_methods.h"

using namespace coding_interview_guide::dynamic_programming::change_money_methods;

TEST(CHANGE_MONEY_METHODS, CHANGE_MONEY_METHODS_EXAMPLE_TEST) {
    std::vector<unsigned int> vec1{5, 10, 25, 1}, vec2{3, 5}, vec3{2, 3, 5, 7, 10};
    ASSERT_EQ(ChangeMoneyMethods::methods_number(vec1, 0), 1);
    ASSERT_EQ(ChangeMoneyMethods::methods_number(vec1, 15), 6);
    ASSERT_EQ(ChangeMoneyMethods::methods_number(vec2, 2), 0);
    ASSERT_EQ(ChangeMoneyMethods::methods_number(vec3, 1000), 20932712);
}

TEST(CHANGE_MONEY_METHODS, CHANGE_MONEY_METHODS_OPT_EXAMPLE_TEST) {
    std::vector<unsigned int> vec1{5, 10, 25, 1}, vec2{3, 5}, vec3{2, 3, 5, 7, 10};
    ASSERT_EQ(ChangeMoneyMethods::methods_number_space_opt(vec1, 0), 1);
    ASSERT_EQ(ChangeMoneyMethods::methods_number_space_opt(vec1, 15), 6);
    ASSERT_EQ(ChangeMoneyMethods::methods_number_space_opt(vec2, 2), 0);
    ASSERT_EQ(ChangeMoneyMethods::methods_number_space_opt(vec3, 1000), 20932712);
}
