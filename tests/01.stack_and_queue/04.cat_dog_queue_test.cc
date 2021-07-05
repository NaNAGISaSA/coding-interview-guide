#include <gtest/gtest.h>

#include "01.stack_and_queue/04.cat_dog_queue.h"

using namespace coding_interview_guide::stack_and_queue::cat_dog_queue;

TEST(CAT_DOG_QUEUE, CAT_DOG_QUEUE_EXAMPLE_TEST) {
    CatDogQueue queue;
    queue.push(Cat());
    ASSERT_FALSE(queue.is_cat_empty());
    queue.push(Dog());
    ASSERT_FALSE(queue.is_dog_empty());
    ASSERT_FALSE(queue.is_empty());
    queue.pop_all();
    ASSERT_TRUE(queue.is_empty());
}
