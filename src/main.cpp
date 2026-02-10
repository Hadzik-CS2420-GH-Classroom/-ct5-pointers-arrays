#include <iostream>

#include "pointers_and_arrays.h"
#include "pointers_as_arrays.h"
#include "arrays_as_pointers.h"

int main() {
    std::cout << "CT5 - Pointers & Arrays Basics" << std::endl;
    std::cout << "===============================" << std::endl;

    // Topic 1: Pointers and Arrays (4 items)
    pointersAndArrays();

    // Topic 2: Treating Pointers as Arrays (2 items)
    pointersAsArrays();

    // Topic 3: Treating Arrays as Pointers (1 item)
    arraysAsPointers();

    std::cout << "\n===============================" << std::endl;
    std::cout << "CT5 Complete!" << std::endl;

    return 0;
}
