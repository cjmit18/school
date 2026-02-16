/* Wayne Mitchell
CIS.269
Week 5 Linked Lists
 */
#include <iostream>
#include "LinkedList.h"
#include <iomanip>

int main() {
    LinkedList list;
    int user;
    while (user != 5){
    std::cout << std::left << std::setw(15);
    std::cout << "\nLink List Tacking Program\n" << std::endl;
    std::cout << "1.Add Node\n2.Add Head\n3.Add Tail\n4.Print List\n5.Exit" << std::endl;
    std::cin >> user;
    switch(user){ // Switch statement for each function call whether you want to choose which node to add through text input or integer choice.
                
        case 1:{
            std::cout << "Add a head or a tail? ";
            std::string choice;
            std::cin >> choice;
            list.addNode(choice); //addNode implemented inversly for ease of reading in my opinion
            break;
        }
        case 2:{
            std::cout << "What integer would you like to add? ";
            int data;
            std::cin >> data;
            list.addToHead(data); //addToHead function call 
            break;
        }
        case 3:{
            std::cout << "What integer would you like to add? ";
            int data;
            std::cin >> data;
            list.addToTail(data); //addToTail function call 
            break;
        }
        case 4:{
            list.printList(); //printList function call
        }

        case 5:{
            break;
        }
        default:
            break;
    };
}  
    return 0;
}