#ifndef BSTNode_H
#define BSTNode_H

//Node Class
class BSTNode {

    public:
    //data and pointers
    int data;
    BSTNode* left{nullptr};
    BSTNode* right{nullptr};

    BSTNode(int d) : data(d){} //Constructor

};


#endif