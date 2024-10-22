/*
    testAddZeroOne.cpp

    Test program for add(0, 1)
*/

#include "add.hpp"
#include <cassert>

// Make sure assert() is not removed
#undef NDEBUG

int main() {

    int n1 = 0;
    int n2 = 1;

    auto result = add(n1, n2);

    assert(result == 1);

    return 0;
}
