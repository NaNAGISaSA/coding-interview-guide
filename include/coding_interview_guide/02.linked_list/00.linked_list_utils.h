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

template <typename T>
Node<T>* construct_linked_list(T&& head) {
    return new Node(std::forward<T>(head));
}

template <typename T, typename... Ts>
Node<T>* construct_linked_list(T&& head, Ts&&... values){
    Node<T>* node = new Node(std::forward<T>(head));
    node->next = construct_linked_list(std::forward<Ts>(values)...);
    return node;
}

template <typename T>
void deconstruct_linked_list(Node<T>* head) {
    Node<T>* current_head = head;
    Node<T>* delete_head = current_head;
    while(delete_head != nullptr){
        current_head = current_head->next;
        delete delete_head;
        delete_head = current_head;
    }
}

}

#endif