#include "pointers_and_arrays.h"

#include <iostream>

void pointersAndArrays() {
    std::cout << "=== Pointers and Arrays ===" << '\n';

    // --- 1. Declaring pointers and arrays ---
    std::cout << "\n--- 1. Declaring Pointers and Arrays ---" << '\n';

    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    // SOLUTION: Declare a pointer called 'ptr' that points to the first element of 'numbers'
    int* ptr = &numbers[0];

    std::cout << "Array first element: " << numbers[0] << '\n';
    // SOLUTION: Print the value that 'ptr' points to using the dereference operator (*)
    std::cout << "Pointer points to: " << *ptr << '\n';

    // --- 2. Taking the address of array elements ---
    std::cout << "\n--- 2. Address of Array Elements ---" << '\n';

    std::cout << "Address of numbers array: " << numbers << '\n';

    // SOLUTION: Print the address of numbers[0] using the address-of operator (&)
    std::cout << "Address of numbers[0]: " << &numbers[0] << '\n';

    // SOLUTION: Print the address of numbers[1] using the address-of operator (&)
    std::cout << "Address of numbers[1]: " << &numbers[1] << '\n';

    // SOLUTION: Print the difference in bytes between &numbers[1] and &numbers[0]
    std::cout << "Bytes between elements: "
              << (char*)&numbers[1] - (char*)&numbers[0] << '\n';

    // --- 3. Dereferencing pointers ---
    std::cout << "\n--- 3. Dereferencing Pointers ---" << '\n';

    int value = 42;

    // SOLUTION: Declare a pointer called 'pValue' that points to 'value'
    int* pValue = &value;

    // SOLUTION: Print the value of 'value' by dereferencing 'pValue'
    std::cout << "Dereferenced value: " << *pValue << '\n';

    // SOLUTION: Change 'value' through the pointer by assigning 99 to *pValue
    *pValue = 99;

    std::cout << "After modification through pointer:" << '\n';
    // SOLUTION: Print 'value' directly to show it changed
    std::cout << "value is now: " << value << '\n';

    // --- 4. Pointer arithmetic ---
    std::cout << "\n--- 4. Pointer Arithmetic ---" << '\n';

    int* start = numbers;

    std::cout << "start points to: " << *start << '\n';

    // SOLUTION: Use pointer arithmetic (start + 1) to print the second element
    std::cout << "start + 1 points to: " << *(start + 1) << '\n';

    // SOLUTION: Use pointer arithmetic (start + 3) to print the fourth element
    std::cout << "start + 3 points to: " << *(start + 3) << '\n';

    // SOLUTION: Create a pointer 'end' that points to the last element using pointer arithmetic
    int* end = start + size - 1;
    std::cout << "end points to: " << *end << '\n';

    // SOLUTION: Print all elements by incrementing a pointer in a for loop
    std::cout << "Walking with pointer: ";
    for (int* p = numbers; p < numbers + size; ++p) {
        std::cout << *p << " ";
    }

    std::cout << '\n';
}
