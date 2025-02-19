#include <string>
#include <cassert>
#include <iostream>

std::string even_or_odd(int number) {
    return number % 2 == 0 ? "Even" : "Odd";
}

void runTests() {
    assert(even_or_odd(2) == "Even");
    assert(even_or_odd(3) == "Odd");
    assert(even_or_odd(0) == "Even");
    assert(even_or_odd(-1) == "Odd");
    assert(even_or_odd(-4) == "Even");
    std::cout << "All tests passed!" << std::endl;
}

int main() {
    runTests();
    return 0;
}
