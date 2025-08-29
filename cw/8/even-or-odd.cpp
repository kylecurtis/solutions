#include <iostream>
#include <cstdlib>
#include <string>
#include <cassert>

// SOLUTION
// =============================================================================
std::string even_or_odd(int number)
{
    return number % 2 == 0 ? "Even" : "Odd";
}

// TESTS
// =============================================================================
void runTests()
{
    assert(even_or_odd(2) == "Even");
    assert(even_or_odd(7) == "Odd");
    assert(even_or_odd(0) == "Even");
    assert(even_or_odd(-4) == "Even");
    assert(even_or_odd(-9) == "Odd");

    std::cout << "All tests passed!" << '\n';
}

// MAIN
// =============================================================================
int main()
{
    runTests();
    return EXIT_SUCCESS;
}
