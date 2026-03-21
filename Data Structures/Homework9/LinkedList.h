/* Linked list implementation
   Simple singly-linked list storing integers in LLNode nodes.
   Methods provided to add nodes at head or tail, print the list,
   and a helper that prompts the user to choose head/tail insertion.
*/
#ifndef LinkedList_H
#define LinkedList_H

#include "LLNode.h"
#include <iostream>
#include <string>

class LinkedList {
    public:
        // Pointer to first node in the list (nullptr if empty)
        LLNode* head;
        // Pointer to last node in the list (nullptr if empty)
        LLNode* tail;

    // Constructor: initialize an empty list
    LinkedList() {
        head = 0;
        tail = 0;
    }

    void addNode(std::string userChoice);
    void addToHead(int data);
    void addToTail(int data);
    void deleteNode(int dataToDelete);
   // void printList(); Deprecated: replaced by printListRecursive and printListNonTailRecursive
    void printListTailRecursive(LLNode* current);
    void printListNonTailRecursive(LLNode* current);
    LLNode* getHead();
    LLNode* getTail();

};

#endif