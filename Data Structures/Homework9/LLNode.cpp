#include "LLNode.h"

void LLNode::setData(int data) {
    this->data = data;
}
void LLNode::setNext(LLNode* next) {
    this->next = next;
}
int LLNode::getData() {
    return this->data;
}
LLNode* LLNode::getNext() {
    return this->next;
}
