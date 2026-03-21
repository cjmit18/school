/* Wayne Mitchell
   CIS.269
   LinkedList class implementation for linked list operations
*/

#include "LinkedList.h"

// Adds a node to head or tail based on user choice
void LinkedList::addNode(std::string userChoice) {
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

// Deletes a node with the specified data value
void LinkedList::deleteNode(int dataToDelete) {
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

// Adds a new node with data to the head of the list
void LinkedList::addToHead(int data) {
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

// Adds a new node with data to the tail of the list
void LinkedList::addToTail(int data){
    LLNode *newNode = new LLNode(data);
    if (tail == nullptr){
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Returns the head node of the list
LLNode* LinkedList::getHead(){
    return head;
}

// Returns the tail node of the list
LLNode* LinkedList::getTail(){
    return tail;
}

/* Deprecated: replaced by printListRecursive and printListNonTailRecursive */
/* void LinkedList::printList() {
    LLNode *current = head;
    while (current != nullptr){
        std::cout << current->getData() << " ";
        current = current->getNext();
    }
    std::cout << std::endl;
}
 */

// Prints the list using tail recursion (normal order)
void LinkedList::printListTailRecursive(LLNode* current) {

    if (current == nullptr || 0) {
        return;
    }
    else {
        std::cout << current->getData() << " ";
        printListTailRecursive(current->getNext());
    }
}

// Prints the list using non-tail recursion (reverse order)
void LinkedList::printListNonTailRecursive(LLNode* current) {
            if (current == nullptr || 0){
                return;
            }
            else {
                printListNonTailRecursive(current->getNext());
                std::cout << current->getData() << " ";
            }
        }