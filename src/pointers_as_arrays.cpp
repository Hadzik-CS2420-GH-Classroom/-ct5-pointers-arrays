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

    // SOLUTION: Print ptr[0] to show that a pointer can use [] just like an array
    std::cout << "Pointer access: ptr[0] = " << ptr[0] << '\n';

    // SOLUTION: Print ptr[2] to access the third element through the pointer
    std::cout << "Pointer access: ptr[2] = " << ptr[2] << '\n';

    // SOLUTION: Print ptr[4] to access the last element through the pointer
    std::cout << "Pointer access: ptr[4] = " << ptr[4] << '\n';

    // --- 2. Iterating using pointer with array syntax ---
    std::cout << "\n--- 2. Looping with Pointer Using [] Syntax ---" << '\n';

    // SOLUTION: Write a for loop that uses ptr[i] to print all elements
    for (int i = 0; i < size; ++i) {
        std::cout << "  ptr[" << i << "] = " << ptr[i] << '\n';
    }

    // Bonus discussion: Why does this work?
    // ptr[i] is equivalent to *(ptr + i)
    // The compiler translates bracket notation into pointer arithmetic!
    std::cout << "\nBonus - these are equivalent:" << '\n';
    std::cout << "  ptr[2]      = " << ptr[2] << '\n';
    std::cout << "  *(ptr + 2)  = " << *(ptr + 2) << '\n';
}
