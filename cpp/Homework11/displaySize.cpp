#include "sizetype.h"
#include <iostream>
#include <string>

int main() {
    stringSize mySize("Hello, World!");
    stringAndDoubleSum mySum("Example String", 42.0);
    arrayofStrings myArray;
    arrayUsingBrackets myBracketArray;
    objectSize myObjectSize;
    hundredClassObjectsArray myHundredObjects;
    hundredClassObjectsBrackets myHundredObjectsBrackets;

    // Pointers to each object
    stringSize* stringSizePtr = &mySize;
    stringAndDoubleSum* sumPtr = &mySum;
    arrayofStrings* arrayPtr = &myArray;
    arrayUsingBrackets* bracketPtr = &myBracketArray;
    objectSize* objectSizePtr = &myObjectSize;
    hundredClassObjectsArray* hundredArrayPtr = &myHundredObjects;
    hundredClassObjectsBrackets* hundredBracketsPtr = &myHundredObjectsBrackets;

    // For each class: sizeof(object), getObjectSize(), sizeof(pointer)
    std::cout << "Size of string (via sizeof object): " << sizeof(mySize) << " in bytes" << std::endl;
    std::cout << "Size of string: " << mySize.getObjectSize() << " in bytes" << std::endl;
    std::cout << "Size of pointer to string: " << sizeof(stringSizePtr) << " in bytes" << std::endl;

    std::cout << "Size of stringAndDoubleSum (via sizeof object): " << sizeof(mySum) << " in bytes" << std::endl;
    std::cout << "Size of stringAndDoubleSum: " << mySum.getObjectSize() << " in bytes" << std::endl;
    std::cout << "Size of pointer to stringAndDoubleSum: " << sizeof(sumPtr) << " in bytes" << std::endl;

    std::cout << "Array of strings size (via sizeof object): " << sizeof(myArray) << " in bytes"  << std::endl;
    std::cout << "Array of strings size: " << myArray.getObjectSize() << " in bytes"  << std::endl;
    std::cout << "Size of pointer to arrayofStrings: " << sizeof(arrayPtr) << " in bytes" << std::endl;

    std::cout << "Array using brackets size (via sizeof object): " << sizeof(myBracketArray) << " in bytes"  << std::endl;
    std::cout << "Array using brackets size: " << myBracketArray.getObjectSize() << " in bytes"  << std::endl;
    std::cout << "Size of pointer to arrayUsingBrackets: " << sizeof(bracketPtr) << " in bytes" << std::endl;

    std::cout << "Size of objectSize (via sizeof object): " << sizeof(myObjectSize) << " in bytes"  << std::endl;
    std::cout << "Size of objectSize: " << myObjectSize.getObjectSize() << " in bytes"  << std::endl;
    std::cout << "Size of pointer to objectSize: " << sizeof(objectSizePtr) << " in bytes" << std::endl;

    std::cout << "Size of hundredClassObjectsArray (via sizeof object): " << sizeof(myHundredObjects) << " in bytes"  << std::endl;
    std::cout << "Size of hundredClassObjectsArray: " << myHundredObjects.getObjectSize() << " in bytes"  << std::endl;
    std::cout << "Size of pointer to hundredClassObjectsArray: " << sizeof(hundredArrayPtr) << " in bytes" << std::endl;

    std::cout << "Size of hundredClassObjectsBrackets (via sizeof object): " << sizeof(myHundredObjectsBrackets) << " in bytes"  << std::endl;
    std::cout << "Size of hundredClassObjectsBrackets: " << myHundredObjectsBrackets.getObjectSize() << " in bytes"  << std::endl;
    std::cout << "Size of pointer to hundredClassObjectsBrackets: " << sizeof(hundredBracketsPtr) << " in bytes" << std::endl;

    // Part 2: nullptr then assign to object
    stringSize* nullPtr = nullptr;

    std::cout << "[Part 2] pointer value after assigning nullptr: " << nullPtr << std::endl;
    std::cout << "[Part 2] sizeof(pointer) after assigning nullptr: " << sizeof(nullPtr) << " in bytes" << std::endl;

    nullPtr = &mySize;

    std::cout << "[Part 2] pointer value after assigning object's address: " << nullPtr << std::endl;
    std::cout << "[Part 2] sizeof(pointer) after assigning object's address: " << sizeof(nullPtr) << " in bytes" << std::endl;
   
    return 0;
}