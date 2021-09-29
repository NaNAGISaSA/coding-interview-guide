#include <map>

#include "05.string/23.dict_tree_impl.h"

namespace coding_interview_guide::string::dict_tree_impl {

struct TrieNode {
    TrieNode() : prefix_number(0U), end_number(0U), map({}) {
    }

    unsigned int prefix_number;
    unsigned int end_number;
    std::map<char, TrieNode> map;
};

struct DictTreeImpl::PImpl {
    PImpl() : head() {
    }

    void insert(const std::string& str) {
        if (!str.size()) {
            return;
        }
        TrieNode* curr_head(&head);
        for (auto& character : str) {
            ++curr_head->prefix_number;
            if (curr_head->map.find(character) == curr_head->map.end()) {
                curr_head->map[character] = TrieNode();
            }
            curr_head = &(curr_head->map[character]);
        }
        ++curr_head->prefix_number;
        ++curr_head->end_number;
    }

    void del(const std::string& str) {
        if (!search(str)) {
            return;
        }
        TrieNode* curr_head(&head);
        for (auto& character : str) {
            --curr_head->prefix_number;
            if (curr_head->map[character].prefix_number == 1U) {
                curr_head->map.erase(character);
                return;
            }
            curr_head = &(curr_head->map[character]);
        }
        --curr_head->prefix_number;
        --curr_head->end_number;
    }

    bool search(const std::string& str) {
        if (!str.size()) {
            return false;
        }
        TrieNode* curr_head(&head);
        for (auto& character : str) {
            if (curr_head->map.find(character) == curr_head->map.end()) {
                return false;
            }
            curr_head = &(curr_head->map[character]);
        }
        return curr_head->end_number != 0U;
    }

    unsigned int prefix_number(const std::string& str) {
        if (!str.size()) {
            return 0U;
        }
        TrieNode* curr_head(&head);
        for (auto& character : str) {
            if (curr_head->map.find(character) == curr_head->map.end()) {
                return 0U;
            }
            curr_head = &(curr_head->map[character]);
        }
        return curr_head->prefix_number;
    }

private:
    TrieNode head;
};

DictTreeImpl::DictTreeImpl() : pimpl(std::make_unique<PImpl>()) {
}

DictTreeImpl::~DictTreeImpl() = default;

void DictTreeImpl::insert(const std::string& str) {
    pimpl->insert(str);
}

void DictTreeImpl::del(const std::string& str) {
    pimpl->del(str);
}

bool DictTreeImpl::search(const std::string& str) const {
    return pimpl->search(str);
}

unsigned int DictTreeImpl::prefix_number(const std::string& str) const {
    return pimpl->prefix_number(str);
}

}  // namespace coding_interview_guide::string::dict_tree_impl
