#include <gtest/gtest.h>

#include "09.other_problems/29.occurrence_top_k.h"

using namespace coding_interview_guide::other_problems::occurrence_top_k;

TEST(OCCURRENCE_TOP_K, OCCURRENCE_TOP_K_EXAMPLE_TEST) {
    testing::internal::CaptureStdout();
    OccurrenceTopK::print_top_k({"cat", "cat", "dog", "dog", "dog", "pig"}, 2);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "No.1: dog, times: 3\nNo.2: cat, times: 2\n");
}
