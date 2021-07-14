#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_LINKED_LIST_UTILS_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_LINKED_LIST_UTILS_H_

namespace coding_interview_guide::linked_list {

template <typename T>
struct Node {
    Node(T&& value) : val(std::forward<T>(value)), next(nullptr){
    }
    T val;
    Node* next;
};

}

#endif
