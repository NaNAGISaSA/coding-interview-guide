#include <gtest/gtest.h>

#include "03.binary_tree/19.party_max_happiness.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::party_max_happiness;

TEST(PARTY_MAX_HAPPINESS, PARTY_MAX_HAPPINESS_EXAMPLE_TEST) {
    Employee one(1), two(2), three(3), four(5), five(12), six(10);
    six.subordinates.push_back(&four);
    six.subordinates.push_back(&five);
    four.subordinates.push_back(&one);
    four.subordinates.push_back(&two);
    four.subordinates.push_back(&three);
    ASSERT_EQ(PartyMaxHappiness::max_happiness(&six), 18);
    four.subordinates.clear();
    five.subordinates.push_back(&one);
    five.subordinates.push_back(&two);
    five.subordinates.push_back(&three);
    ASSERT_EQ(PartyMaxHappiness::max_happiness(&six), 17);
}
