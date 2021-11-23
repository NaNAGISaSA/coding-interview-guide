#include <gtest/gtest.h>

#include "09.other_problems/30.top_k_recorder.h"

using namespace coding_interview_guide::other_problems::top_k_recorder;

TEST(TOP_K_RECORDER, TOP_K_RECORDER_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    TopKRecorder recorder(3);
    recorder.add("dog");
    recorder.add("cat");
    recorder.add("cat");
    recorder.print_top_k();
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "dog: 1\ncat: 2\n");
}

TEST(TOP_K_RECORDER, TOP_K_RECORDER_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    TopKRecorder recorder(3);
    recorder.add("dog");
    recorder.add("cat");
    recorder.add("pig");
    recorder.add("pig");
    recorder.add("pig");
    recorder.add("cow");
    recorder.add("cow");
    recorder.add("dog");
    recorder.add("cat");
    recorder.add("cat");
    recorder.print_top_k();
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "cow: 2\ncat: 3\npig: 3\n");
}
