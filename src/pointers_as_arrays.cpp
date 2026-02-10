#include "pointers_as_arrays.h"

#include <iostream>

void pointersAsArrays() {
    std::cout << "\n=== Treating Pointers as Arrays ===" << '\n';

    int data[] = {100, 200, 300, 400, 500};
    int size = 5;

    // A pointer to the first element of data
    int* ptr = data;

    // --- 1. Using bracket [] indexing on a pointer ---
    std::cout << "\n--- 1. Bracket Indexing on a Pointer ---" << '\n';

    std::cout << "Array access:   data[0] = " << data[0] << '\n';

    // TODO: Print ptr[0] to show that a pointer can use [] just like an array
    // Expected output: "Pointer access: ptr[0] = 100"

    // TODO: Print ptr[2] to access the third element through the pointer
    // Expected output: "Pointer access: ptr[2] = 300"

    // TODO: Print ptr[4] to access the last element through the pointer
    // Expected output: "Pointer access: ptr[4] = 500"

    // --- 2. Iterating using pointer with array syntax ---
    std::cout << "\n--- 2. Looping with Pointer Using [] Syntax ---" << '\n';

    // TODO: Write a for loop that uses ptr[i] to print all elements
    //       Use 'size' as the loop bound
    // Expected output:
    //   ptr[0] = 100
    //   ptr[1] = 200
    //   ptr[2] = 300
    //   ptr[3] = 400
    //   ptr[4] = 500

    // Bonus discussion: Why does this work?
    // ptr[i] is equivalent to *(ptr + i)
    // The compiler translates bracket notation into pointer arithmetic!
    std::cout << "\nBonus - these are equivalent:" << '\n';
    std::cout << "  ptr[2]      = " << ptr[2] << '\n';
    std::cout << "  *(ptr + 2)  = " << *(ptr + 2) << '\n';
}
