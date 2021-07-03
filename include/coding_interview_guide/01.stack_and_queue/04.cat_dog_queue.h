#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_CAT_DOG_QUEUE_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_CAT_DOG_QUEUE_H_

/*
【题目】
实现一种猫狗队列的结构，要求如下：
1. 用户可以调用 add 方法将 cat 或者 dog 放入队列中
2. 用户可以调用 pollAll 方法将队列中的 cat 和 dog 按照进队列的先后顺序依次弹出
3. 用户可以调用 pollDog 方法将队列中的 dog 按照进队列的先后顺序依次弹出
4. 用户可以调用 pollCat 方法将队列中的 cat 按照进队列的先后顺序依次弹出
5. 用户可以调用 isEmpty 方法检查队列中是否还有 dog 或 cat
6. 用户可以调用 isDogEmpty 方法检查队列中是否还有 dog
7. 用户可以调用 isCatEmpty 方法检查队列中是否还有 cat
*/

#include <atomic>
#include <queue>
#include <string>

namespace coding_interview_guide::stack_and_queue::cat_dog_queue {

// User's headers
class Pet {
public:
    Pet(std::string type) : _type(std::move(type)) {}
    const std::string& get_type() const {
        return _type;
    }
private:
    std::string _type;
};

class Dog : public Pet {
public:
    Dog() : Pet("dog") {}
};

class Cat : public Pet {
public:
    Cat() : Pet("cat") {}
};

// Code
class IndexPet {
public:
    IndexPet(const Pet& pet, long index);
    IndexPet(Pet&& pet, long index);

    Pet pet;
    long index;
};

class CatDogQueue {
public:
    CatDogQueue();

    void push(const Pet&);
    void push(Pet&&);

    void pop_all();
    void pop_dog();
    void pop_cat();

    bool is_empty() const;
    bool is_dog_empty() const;
    bool is_cat_empty() const;

    const Pet& front() const;
    Pet& front();

private:
    std::queue<IndexPet> _dog_queue;
    std::queue<IndexPet> _cat_queue;
    std::atomic<long> _index{0};
};

}  // namespace coding_interview_guide::stack_and_queue::cat_dog_queue

#endif