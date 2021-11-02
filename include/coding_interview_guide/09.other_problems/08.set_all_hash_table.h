#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_SET_ALL_HASH_TABLE_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_SET_ALL_HASH_TABLE_H_

/*
【题目】
哈希表常见的三个操作是put、get和containsKey，而且这三个操作的时间复杂度为O(1)。
现在想加一个setAll功能，就是把所有记录value都设成统一的值。
请设计并实现这种有setAll功能的哈希表，并且put、get、containsKey和setAll四个操作的时间复杂度都为O(1)。
*/

#include <memory>

namespace coding_interview_guide::other_problems::set_all_hash_table {

template <typename K, typename V>
class SetAllHashTable {
public:
    SetAllHashTable();
    ~SetAllHashTable();

    void put(const K&, const V&);
    void put(const K&, V&&);

    const V& get(const K&) const;

    bool contains(const K&) const;

    void set_all(const V&);
    void set_all(V&&);

private:
    struct Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace coding_interview_guide::other_problems::set_all_hash_table

#endif