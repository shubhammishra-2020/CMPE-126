//
//  BaseLinkedListType.hpp
//  DemoLinkedList
//
//  Created by Vishwa Shah on 3/7/22.
//

#ifndef BaseLinkedListType_hpp
#define BaseLinkedListType_hpp

#include <stdio.h>
//#include "LinkedListInterator.hpp"

template <class Type>
class nodeType {
public:
    Type data;
    nodeType* next;
};

template <class Type>
class linkedListType
{
public:
    const linkedListType<Type>& operator=(const linkedListType<Type>&);
    void initializeList(); //Postcondition: first = NULL, last = NULL, count = 0;
    bool isEmptyList() const;
    void print() const;
    int length() const;
    void destroyList();
    Type front() const;
    Type back() const;
    bool search(const Type& searchItem) const;
    void insertFirst(const Type& newItem);
    void insertLast(const Type& newItem);
    void deleteNode(const Type& deleteItem);
    void reverseList();
    linkedListType();
    linkedListType(const linkedListType<Type>& otherList);
    void deletekElement(int k);
    ~linkedListType();
    void deleteOccurence(Type item) {
        nodeType<Type>* value = this->first;
        nodeType<Type>* previous = NULL;
        while (value != NULL) {
            if (value->data == item) {
                if (previous == NULL) {
                    this->first = value->next;
                    this->last = this->first;
                }
                else {
                    previous->next = value->next;
                }

                nodeType <Type>* save = value;
                value = value->next;
                delete save;

                this->count--;
                continue;
            }

            previous = value;
            value = value->next;
        }
    }
protected:
    int count;
    nodeType<Type>* first;
    nodeType<Type>* last;
private:
    void copyList(const linkedListType<Type>& otherList);
};

#endif /* BaseLinkedListType_hpp */
