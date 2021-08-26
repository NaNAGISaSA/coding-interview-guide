#include <gtest/gtest.h>

#include "01.stack_and_queue/04.cat_dog_queue.h"

using namespace coding_interview_guide::stack_and_queue::cat_dog_queue;

TEST(CAT_DOG_QUEUE, CAT_DOG_QUEUE_EXAMPLE_TEST) {
    CatDogQueue queue;
    queue.push(Cat());
    ASSERT_FALSE(queue.is_cat_empty());
    ASSERT_EQ(queue.front().get_type(), "cat");
    queue.push(Dog());
    ASSERT_FALSE(queue.is_dog_empty());
    ASSERT_FALSE(queue.is_empty());
    ASSERT_EQ(queue.front().get_type(), "cat");
    queue.pop_cat();
    ASSERT_EQ(queue.front().get_type(), "dog");
    queue.pop_all();
    ASSERT_TRUE(queue.is_empty());
}
