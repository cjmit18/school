#ifndef BSTree_H
#define BSTree_H
#include "BSTNode.h"
#include <iostream>
//Binary Tree Class
class BSTree {
    public:
    BSTNode* root = nullptr;
    BSTree() = default;


    //add nodes to tree
    void addNode(int data) {
        BSTNode* newNode = new BSTNode(data);

        if (root == nullptr) {
            root = newNode;
            return;
        }
        BSTNode* currentNode = root;
        bool added{false};
        while (!added){
            if (newNode->data > currentNode->data){
                if (currentNode->right == nullptr){
                    currentNode->right = newNode;
                    added = true;
                } else {
                currentNode = currentNode->right;
            }
        } else if (newNode->data < currentNode->data){  
                if (currentNode->left == nullptr){    
                    currentNode->left = newNode;
                    added = true;
            } else { 
                currentNode = currentNode->left;
            }
        }
    }
}
    //Print tree method
    void printTree() {
        std::cout << "Preorder List: ";
        preorderPrint(root);
        std::cout << std::endl;
        std::cout << "Inorder List: ";
        inorderPrint(root);
        std::cout << std::endl;
        std::cout << "PostOrder List: ";
        postorderPrint(root);
    }

    //specific print orders
    void preorderPrint(BSTNode* rootNode){
        if (!rootNode){
            return;
        }
        std::cout << rootNode->data << " ";
        preorderPrint(rootNode->left);
        preorderPrint(rootNode->right);
    }

    void inorderPrint(BSTNode* rootNode){
        if (!rootNode){
            return;
        }
        inorderPrint(rootNode->left);
        std::cout << rootNode->data << " ";
        inorderPrint(rootNode->right);
    }

    void postorderPrint(BSTNode* rootNode){
        if (!rootNode){
            return;
        }
        postorderPrint(rootNode->left);
        postorderPrint(rootNode->right);
        std::cout << rootNode->data << " ";
    }
};

#endif