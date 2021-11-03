#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_DESIGN_LRU_STRUCT_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_DESIGN_LRU_STRUCT_H_

/*
【题目】
设计LRU缓存结构，该结构在构造时确定大小，假设大小为K，并有如下两个功能：
set(key, value)：将记录(key, value)插入该结构；
get(key)：返回key对应的value值。
【要求】
set和get方法的时间复杂度为O(1)；
某个key的set或get操作一旦发生，认为这个key的记录成了最常使用的；
当缓存的大小超过K时，移除最不经常使用的记录，即set或get最久远的；
*/

#include <memory>

namespace coding_interview_guide::other_problems::design_lru_struct {

class LRUCache {
public:
    LRUCache(size_t);
    ~LRUCache();

    void set(int key, int value);
    int get(int key);

private:
    struct Impl;
    std::unique_ptr<Impl> pimpl;
};

}  // namespace coding_interview_guide::other_problems::design_lru_struct

#endif
