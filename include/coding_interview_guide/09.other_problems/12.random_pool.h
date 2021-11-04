#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_RANDOM_POOL_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_RANDOM_POOL_H_

/*
【题目】
设计一种结构，在该结构中存在如下三个功能：
1. insert(key) -> 将某一个key加入到该结构中，做到不重复加入；
2. delete(key) -> 将原本在结构中的某一个key移除；
3. get_random() -> 等概率随机返回结构中任意一个key；
【要求】
三种方法的时间复杂度均为O(1)。
*/

#include <unordered_map>

namespace coding_interview_guide::other_problems::random_pool {

class RandomPool {
public:
    RandomPool();
    void insert(int key);
    void del(int key);
    int get_random();

private:
    std::unordered_map<size_t, int> index_key_map;
    std::unordered_map<int, size_t> key_index_map;
    size_t pool_size;
};

}  // namespace coding_interview_guide::other_problems::random_pool

#endif
