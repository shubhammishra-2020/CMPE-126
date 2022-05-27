//
//  BaseLinkedListType.cpp
//  DemoLinkedList
//
//  Created by Vishwa Shah on 03/7/22.
//

#include "BaseLinkedListType.hpp"
#include <iostream>
using namespace std;

template<class Type>
const linkedListType<Type>& linkedListType<Type>::operator=(const linkedListType<Type>& otherList) {
    if (this != &otherList)
    {
        copyList(otherList);
    }
    return *this;
}

template<class Type>
void linkedListType<Type>::initializeList() {
    destroyList();
}

template<class Type>
bool linkedListType<Type>::isEmptyList() const {
    return first == NULL;
}

template<class Type>
void linkedListType<Type>::print() const {
    nodeType<Type>* head;
    head = first;
    if (head == NULL) {
        cout << "No element" << endl;
    }
    while (head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
}

template<class Type>
int linkedListType<Type>::length() const {
    return count;
}

template<class Type>
void linkedListType<Type>::destroyList() {
    nodeType<Type>* temp;

    while (first != NULL) {
        temp = first;
        first = first->next;
        delete temp;
    }
    last = NULL;
    count = 0;
}

template<class Type>
Type linkedListType<Type>::front() const {
    if (first == NULL) {
        cerr << "List is empty";
    }
    return first->data;
}

template<class Type>
Type linkedListType<Type>::back() const {
    if (last == NULL) {
        cerr << "List has no last element";
    }
    return last->data;
}



template<class Type>
linkedListType<Type>::linkedListType() {
    first = NULL;
    last = NULL;
    count = 0;
}

template<class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type>& otherList) {
    first = NULL;
    copyList(otherList);
}

template<class Type>
linkedListType<Type>::~linkedListType() {
    destroyList();
}

template<class Type>
void linkedListType<Type>::copyList(const linkedListType<Type>& otherList) {
    if (first != NULL) {
        destroyList();
    }
    nodeType<Type>* head = otherList.first;
    nodeType<Type>* node = NULL;
    if (head == NULL) {
        first = NULL;
        last = NULL;
        count = 0;
    }
    else {
        first = new nodeType<Type>();
        first->data = head->data;
        first->next = NULL;
        last = first;
        head = head->next;
        while (head != NULL) {
            node = new nodeType<Type>();
            node->data = head->data;
            node->next = NULL;
            last->next = node;
            last = node;
            head = head->next;
        }
    }

}

template<class Type>
bool linkedListType<Type>::search(const Type& searchItem) const {
    nodeType<Type>* temp = first;
    while (temp != NULL) {
        if (temp->data == searchItem) {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

template<class Type>
void linkedListType<Type>::insertFirst(const Type& newItem) {
    nodeType<Type>* node = new nodeType<Type>();
    node->data = newItem;
    node->next = first;
    first = node;
    if (last == NULL) {
        last = node;
    }
    count++;
}

template<class Type>
void linkedListType<Type>::insertLast(const Type& newItem) {
    nodeType<Type>* node = new nodeType<Type>();
    node->data = newItem;
    node->next = NULL;
    if (first == NULL) {
        first = node;
        last = first;
    }
    else {
        last->next = node;
        last = node;
    }
    count++;
}

template<class Type>
void linkedListType<Type>::deleteNode(const Type& deleteItem) {
    nodeType<Type>* temp = first;
    nodeType<Type>* previous = NULL;
    while (temp != NULL) {
        if (temp->data == deleteItem) {
            if (previous == NULL) {
                first = temp->next;
                last = first;
            }
            else {
                previous->next = temp->next;
            }
            delete temp;
            count--;
            break;
        }
        previous = temp;
        temp = temp->next;
    }
}

template<class Type>
void linkedListType<Type>::reverseList() {
    nodeType<Type>* head = first;
    if (head != NULL && head->next != NULL) {
        nodeType<Type>* previous = NULL;
        nodeType<Type>* after = NULL;
        while (head != NULL) {
            if (previous == NULL) {
                last = head;
            }
            after = head->next;
            head->next = previous;
            previous = head;
            head = after;
        }
        if (previous != NULL) {
            first = previous;
        }
        else {
            first = last;
        }
    }
}

template linkedListType<int>::linkedListType();
template void linkedListType<int>::initializeList();
template void linkedListType<int>::insertFirst(const int& newItem);
template void linkedListType<int>::print() const;
template void linkedListType<int>::insertLast(const int& newItem);
template void linkedListType<int>::deleteNode(const int& deleteItem);
template int linkedListType<int>::length() const;
template void linkedListType<int>::reverseList();
