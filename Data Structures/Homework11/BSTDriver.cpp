#include "BSTree.h"
#include <iostream>
/*Wayne Mitchell
CIS 269
Binary Search Tree
*/
int main(){
    BSTree tree;
    int count{0};
    int user{0};
  while (count != 10){
    std::cout << "Enter a number:" << std::endl;
    std::cin >> user;
    if (user == -1){
      break;
    }
    tree.addNode(user); // add nodes
    count++;
  }
    tree.printTree(); // print trees
    return 0;
}