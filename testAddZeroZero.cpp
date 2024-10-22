/*
    testAddZeroZero.cpp

    Test program for add(0, 0)
*/

#include "add.hpp"
#include <cassert>

// Make sure assert() is not removed
#undef NDEBUG

int main() {

    int n1 = 0;
    int n2 = 0;

    auto result = add(n1, n2);

    assert(result == 0);

    return 0;
}
