#include "arrays_as_pointers.h"

#include <iostream>

// This helper function takes a POINTER, not an array
// When you pass an array to this function, it "decays" into a pointer
void printArray(const int* arr, int size) {
    std::cout << "Inside printArray (received as pointer):" << '\n';
    for (int i = 0; i < size; ++i) {
        std::cout << "  *(arr + " << i << ") = " << *(arr + i) << '\n';
    }
}

void arraysAsPointers() {
    std::cout << "\n=== Treating Arrays as Pointers ===" << '\n';

    int grades[] = {95, 87, 72, 91, 88};
    int size = 5;

    // --- 1. Array decay: passing an array to a pointer parameter ---
    std::cout << "\n--- 1. Array Decay to Pointer ---" << '\n';

    // Notice: 'grades' is an array, but printArray expects a pointer (const int*)
    // The array "decays" (automatically converts) to a pointer to its first element

    // TODO: Call printArray, passing 'grades' as the first argument and 'size' as the second
    // Expected output:
    //   Inside printArray (received as pointer):
    //     *(arr + 0) = 95
    //     *(arr + 1) = 87
    //     *(arr + 2) = 72
    //     *(arr + 3) = 91
    //     *(arr + 4) = 88

    // --- 2. Using pointer arithmetic directly on an array name ---
    std::cout << "\n--- 2. Pointer Arithmetic on Array Name ---" << '\n';

    std::cout << "grades itself points to address: " << grades << '\n';

    // TODO: Print the value of *grades (dereference the array name as if it were a pointer)
    // Expected output: "First element (*grades): 95"

    // TODO: Print the value of *(grades + 2)
    // Expected output: "Third element *(grades + 2): 72"

    // TODO: Print the value of *(grades + 4)
    // Expected output: "Fifth element *(grades + 4): 88"

    // Key takeaway: An array name can be used almost everywhere a pointer can!
    // The main difference: you can't reassign an array name (grades = something_else; won't compile)
    std::cout << "\nKey difference: arrays can't be reassigned:" << '\n';
    std::cout << "  int* ptr = grades;  // OK - pointer can point to array" << '\n';
    std::cout << "  ptr = nullptr;      // OK - pointer can be reassigned" << '\n';
    std::cout << "  // grades = ptr;    // ERROR - array name can't be reassigned!" << '\n';
}
