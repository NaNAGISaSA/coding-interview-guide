#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/09.copy_rand_node_linked_list.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::copy_rand_node_linked_list;

TEST(COPY_RAND_NODE_LINKED_LIST, COPY_RAND_NODE_LINKED_LIST_EXAMPLE_TEST) {
    RandNode<int> rand1(1), rand2(2), rand3(3);
    rand1.next = &rand2;
    rand2.next = &rand3;
    rand3.next = nullptr;
    rand1.rand = &rand3;
    rand2.rand = &rand1;
    rand3.rand = nullptr;
    auto rand1_ = CopyRandomNodeLinkedList::copy(&rand1);
    ASSERT_EQ(rand1_->rand, rand1_->next->next);
    ASSERT_EQ(rand1_->next->rand, rand1_);
    ASSERT_EQ(rand1_->next->next->rand, nullptr);
    ASSERT_EQ(rand1_->next->next->next, nullptr);
}

TEST(COPY_RAND_NODE_LINKED_LIST, COPY_RAND_NODE_LINKED_LIST_OPT_EXAMPLE_TEST) {
    RandNode<int> rand1(1), rand2(2), rand3(3);
    rand1.next = &rand2;
    rand2.next = &rand3;
    rand3.next = nullptr;
    rand1.rand = &rand3;
    rand2.rand = &rand1;
    rand3.rand = nullptr;
    auto rand1_ = CopyRandomNodeLinkedList::copy_opt(&rand1);
    ASSERT_EQ(rand1_->rand, rand1_->next->next);
    ASSERT_EQ(rand1_->next->rand, rand1_);
    ASSERT_EQ(rand1_->next->next->rand, nullptr);
    ASSERT_EQ(rand1_->next->next->next, nullptr);
}
