/* CIS 268
   Wayne Mitchell
   Homework 4
   Complexity Analysis 
*/

#include <iostream>
#include "BigO.h"
#include <array>


int main() {
    // Example arrays of different sizes for operation counting
    std::array<int, 10> arr {1, 2};
    std::array<int, 10> arr2 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::array<int, 10> arr3 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::array<int, 100> arr4 {1, 2, 3, 4, 5};
    std::array<int, 100> arr5 {1, 2, 3, 4, 5};

    // Part 1: constant-time comparisons on first two elements
    BigO bigO;
    if ((int) arr[0] < arr[1]) {
        bigO.updateTotalOperations(1);
    }
    if ((int) arr[0] == arr[1]) {
        bigO.updateTotalOperations(1);
    }
    if ((int) arr[0] > arr[1]) {
        bigO.updateTotalOperations(1);
    }
    bigO.updateTotalOperations(1); // increment of i

    // Part 2: linear-time sum of all elements
    BigO bigO2;
    int sum2{0};
    bigO2.updateTotalOperations(1); // init of i
    for (int i{0}; i < arr2.size(); i++){
        bigO2.updateTotalOperations(1); // comparison of i and arr2.size()
        sum2 += arr2[i];
        bigO2.updateTotalOperations(2); // sum2 assignment and increment of i
    }

    // Part 3: quadratic-time sum of all prefix subarrays
    BigO bigO3;
    int sum3{0};
    bigO3.updateTotalOperations(1); // init of i
    for (int i{0}; i < arr3.size(); i++){
        bigO3.updateTotalOperations(1); // comparison of i and arr3.size()
        sum3 = arr3[0];
        bigO3.updateTotalOperations(1); //sum3 assignment
        bigO3.updateTotalOperations(1); // init of j
        for (int j{1}; j <= i; j++){
            bigO3.updateTotalOperations(1); // comparison of j and i
            sum3 += arr3[j];
            bigO3.updateTotalOperations(1); // sum3 assignment
            bigO3.updateTotalOperations(1); // increment of j
        }
        bigO3.updateTotalOperations(1); // increment of i
    }

    // Part 4: constant-time comparisons on first two elements (size 100)
    BigO bigO4;
    int sum4{0};
    if (arr4[0] < arr4[1]) {
        bigO4.updateTotalOperations(1);
    }
    if (arr4[0] == arr4[1]) {
        bigO4.updateTotalOperations(1);
    }
    if (arr4[0] > arr4[1]) {
        bigO4.updateTotalOperations(1);
    }
    bigO4.updateTotalOperations(1); // increment of i

    // Part 5: linear-time sum of all elements (size 100)
    BigO bigO5;
    int sum5{0};
    bigO5.updateTotalOperations(1); // init of i
    for (int i{0}; i < arr5.size(); i++){
        bigO5.updateTotalOperations(1); // comparison of i and arr5.size()
        sum5 += arr5[i];
        bigO5.updateTotalOperations(2); // increment of i
    }

    // Part 6: quadratic-time sum of all prefix subarrays (size 100)
    BigO bigO6;
    int sum6{0};
    bigO6.updateTotalOperations(1); // init of i
    for (int i{0}; i < arr5.size(); i++){
        bigO6.updateTotalOperations(1); // comparison of i and arr5.size()
        sum6 = arr5[0];
        bigO6.updateTotalOperations(1); //sum6 assignment
        bigO6.updateTotalOperations(1); // init of j
        for (int j{1}; j <= i; j++){
            bigO6.updateTotalOperations(1); // comparison of j and i
            sum6 += arr5[j];
            bigO6.updateTotalOperations(1); // sum6 assignment
            bigO6.updateTotalOperations(1); // increment of j
        }
        bigO6.updateTotalOperations(1); // increment of i
    }

    // Output estimated asymptotic complexity for each part
    std::cout << "Part 1 - Array size 10, comparison of first two values\n" << bigO.getBigO(arr.size()) << std::endl;
    std::cout << "Part 2 - Array size 10, compute sum \n" << bigO2.getBigO(arr2.size()) << std::endl;
    std::cout << "Part 3 - Array size 10, compute sum of subarrays \n" << bigO3.getBigO(arr3.size()) << std::endl;
    std::cout << "Part 4 - Array size 100, compute sum\n" << bigO4.getBigO(arr4.size()) << std::endl;
    std::cout << "Part 5 - Array size 100, comparison of first two values\n" << bigO5.getBigO(arr5.size()) << std::endl;
    std::cout << "Part 6 - Array size 100, compute sum of subarrays\n" << bigO6.getBigO(arr5.size()) << std::endl;
    return 0;
}