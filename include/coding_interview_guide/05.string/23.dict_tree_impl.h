#ifndef _CODING_INTERVIEW_GUIDE_STRING_DICT_TREE_IMPL_H_
#define _CODING_INTERVIEW_GUIDE_STRING_DICT_TREE_IMPL_H_

/*
【题目】
字典树又称为前缀树或者Trie树，是处理字符串常用的数据结构。假设组成所有单词的字符仅是‘a’～‘z’，请实现字典树的结构，并包含以下四个主要的功能。
void insert(String word)：添加word，可重复添加；
void delete(String word)：删除word，如果word添加过多次，仅删除一次；
boolean search(String word)：查询word是否在字典树中；
int prefixNumber(String pre)：返回以字符串pre作为前缀的单词数量。
【要求】
时间复杂度O（m * max(len(word))），额外空间复杂度O（m * max(len(word))）。
*/

#include <memory>
#include <string>

namespace coding_interview_guide::string::dict_tree_impl {

class DictTreeImpl {
public:
    DictTreeImpl();
    ~DictTreeImpl();

    void insert(const std::string& str);
    void del(const std::string& str);
    bool search(const std::string& str) const;
    unsigned int prefix_number(const std::string& str) const;

private:
    struct PImpl;
    std::unique_ptr<PImpl> pimpl;
};

}  // namespace coding_interview_guide::string::dict_tree_impl

#endif
