#include <iostream>
#include <cstdlib>
#include <cassert>

// SOLUTION
// =============================================================================
int multiply(int a, int b)
{
    return a * b;
}

// ASSERT TESTS
// =============================================================================
void runTests()
{
    // STANDARD TESTS
    assert(multiply(2, 3) == 6);
    assert(multiply(5, 4) == 20);
    assert(multiply(0, 100) == 0);
    assert(multiply(1, 1) == 1);

    // EDGE CASES
    assert(multiply(-2, 3) == -6);
    assert(multiply(-5, -4) == 20);
    assert(multiply(10, 0) == 0);

    std::cout << "All tests passed!" << '\n';
}

// MAIN
// =============================================================================
int main()
{
    runTests();
    return EXIT_SUCCESS;
}
