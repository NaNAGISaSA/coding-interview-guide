#include <gtest/gtest.h>

#include "09.other_problems/24.print_message_struct.h"

using namespace coding_interview_guide::other_problems::print_message_struct;

TEST(PRINT_MESSAGE_STRUCT, PRINT_MESSAGE_STRUCT_EXAMPLE_TEST) {
    PrintMessageStruct msg_printer;
    testing::internal::CaptureStdout();
    msg_printer.receive(2);
    msg_printer.receive(1);
    msg_printer.receive(4);
    msg_printer.receive(5);
    msg_printer.receive(7);
    msg_printer.receive(3);
    msg_printer.receive(9);
    msg_printer.receive(8);
    msg_printer.receive(6);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1, 2\n3, 4, 5\n6, 7, 8, 9\n");
}
