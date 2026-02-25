
/* Basic linear node for a linked list */
#ifndef LLNODE_H
#define LLNODE_H
#include <iostream>

class LLNode {
    public:
        int data; //Data in int value
        LLNode* next; //Next node

        LLNode(int data) { // init
            this->data = data;
            this->next = nullptr;
        };
        int getData(){
            return this->data;
        }
        LLNode* getNext(){
            return this->next;
        }
        void setData(int data){
            this->data = data;
        }

        void setNext(LLNode* next){
            this->next = next;
        }
};


#endif 