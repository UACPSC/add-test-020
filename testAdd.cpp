#include "add.hpp"
#include <cassert>

// Make sure assert() is not removed
#undef NDEBUG

int main() {

    // add(0, 0)
    {
        int n1 = 0;
        int n2 = 0;

        auto result = add(n1, n2);

        assert(result == 0);
    }

    // add(0, 1)
    {
        int n1 = 0;
        int n2 = 1;

        auto result = add(n1, n2);

        assert(result == 1);
    }

    return 0;
}
