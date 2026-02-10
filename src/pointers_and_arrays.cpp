#include "pointers_and_arrays.h"
#include <iostream>

void pointersAndArrays() {
    std::cout << "=== Pointers and Arrays ===" << std::endl;

    // --- 1. Declaring pointers and arrays ---
    std::cout << "\n--- 1. Declaring Pointers and Arrays ---" << std::endl;

    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    // TODO: Declare a pointer called 'ptr' that points to the first element of 'numbers'

    std::cout << "Array first element: " << numbers[0] << std::endl;
    // TODO: Print the value that 'ptr' points to using the dereference operator (*)
    // Expected output: "Pointer points to: 10"

    // --- 2. Taking the address of array elements ---
    std::cout << "\n--- 2. Address of Array Elements ---" << std::endl;

    std::cout << "Address of numbers array: " << numbers << std::endl;

    // TODO: Print the address of numbers[0] using the address-of operator (&)
    // Expected output: "Address of numbers[0]: <some address>"

    // TODO: Print the address of numbers[1] using the address-of operator (&)
    // Expected output: "Address of numbers[1]: <some address>"

    // TODO: Print the difference in bytes between &numbers[1] and &numbers[0]
    //       Hint: cast the addresses to (char*) before subtracting to get bytes
    // Expected output: "Bytes between elements: 4"

    // --- 3. Dereferencing pointers ---
    std::cout << "\n--- 3. Dereferencing Pointers ---" << std::endl;

    int value = 42;

    // TODO: Declare a pointer called 'pValue' that points to 'value'

    // TODO: Print the value of 'value' by dereferencing 'pValue'
    // Expected output: "Dereferenced value: 42"

    // TODO: Change 'value' through the pointer by assigning 99 to *pValue

    std::cout << "After modification through pointer:" << std::endl;
    // TODO: Print 'value' directly to show it changed
    // Expected output: "value is now: 99"

    // --- 4. Pointer arithmetic ---
    std::cout << "\n--- 4. Pointer Arithmetic ---" << std::endl;

    int* start = numbers;

    std::cout << "start points to: " << *start << std::endl;

    // TODO: Use pointer arithmetic (start + 1) to print the second element
    // Expected output: "start + 1 points to: 20"

    // TODO: Use pointer arithmetic (start + 3) to print the fourth element
    // Expected output: "start + 3 points to: 40"

    // TODO: Create a pointer 'end' that points to the last element using pointer arithmetic

    // TODO: Print all elements by incrementing a pointer in a for loop
    //       Hint: use a pointer that starts at 'numbers' and increments with ++
    // Expected output: "Walking with pointer: 10 20 30 40 50"
    std::cout << "Walking with pointer: ";

    // your loop here

    std::cout << std::endl;
}
