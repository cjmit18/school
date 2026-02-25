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
        head = 0;   // using 0 here; nullptr is preferred but left as original
        tail = 0;
    }

    // Prompt-driven add: accepts "head" or "tail" and reads an integer from stdin.
    // If any other string is provided, the function returns without modifying the list.
    void addNode(std::string userChoice) {
        if (userChoice == "head"){
            std::cout << "What integer would you like to add? ";
            int data;
            std::cin >> data;
            addToHead(data);
        }
        else if (userChoice == "tail") {
            std::cout << "What integer would you like to add? ";
            int data;
            std::cin >> data;
            addToTail(data);
        }
        else {
            return;
        }
    }

    void deleteNode(int dataToDelete) {
        LLNode *current = head;
        LLNode *previous = nullptr;
        bool isDeleted = false;

        while(current != nullptr){
            if (current->getData() == dataToDelete){
                if (head == current && tail == current){
                    head = nullptr;
                    tail = nullptr;
                    delete current;
                    isDeleted = true;
                    return;
                }
                else if (head == current){
                    head = current->getNext();
                    delete current;
                    isDeleted = true;
                    return;
                }
                else if (tail == current){
                    tail = previous;
                    previous->setNext(nullptr);
                    delete current;
                    isDeleted = true;
                    return;
                }
                else {
                    previous->setNext(current->getNext());
                    delete current;
                    isDeleted = true;
                    return;
                }
            }
                previous = current;
                current = current->getNext();
        }
        if (!isDeleted){
            std::cout << "Node Not Found" << std::endl;
        }
    }
    // Create a new node and insert it at the front of the list.
    // If the list is empty, head and tail both point to the new node.
    void addToHead(int data) {
        LLNode *newNode = new LLNode(data);
        if (head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Create a new node and append it to the end of the list.
    // If the list is empty, head and tail both point to the new node.
    void addToTail(int data){
        LLNode *newNode = new LLNode(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }       
    }

    // Traverse the list and print each node's data to stdout.
    // The loop condition currently contains "|| 0" which is redundant;
    // it should be "while (LCV != nullptr)" to be clear and correct.
    void printList(){
        LLNode *LCV = head; // loop control variable
        while(LCV != nullptr){
            std::cout << "\n" << LCV->data << "\n" << std::endl;
            LCV = LCV->next;
        }
    }
};

#endif