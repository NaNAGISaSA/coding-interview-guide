#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_LINKED_LIST_UTILS_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_LINKED_LIST_UTILS_H_

#include <utility>

namespace coding_interview_guide::linked_list {

template <typename T>
struct Node {
    Node(T&& value) : val(std::forward<T>(value)), next(nullptr) {
    }
    T val;
    Node* next;
};

template <typename T>
struct DoubleNode {
    DoubleNode(T&& value) : val(std::forward<T>(value)), prev(nullptr), next(nullptr) {
    }
    T val;
    DoubleNode* prev;
    DoubleNode* next;
};

}  // namespace coding_interview_guide::linked_list

#endif
