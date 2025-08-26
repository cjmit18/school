#include <iostream>
#include "Room.h"
using namespace std;

int main() 
{
	
    // This instantiates a Room object using two
    Room room("Classroom", 25);
    
        cout << "This room is a " << room.getType() << endl;
        cout << "Its capacity is " << room.getCapacity() << " people." << endl;

    room.setCapacity(30);
    room.setType("Lecture Hall");

        cout << "This room is now a " << room.getType() << endl;
        cout << "Its new capacity is " << room.getCapacity() << " people." << endl;

    return 0;
}
