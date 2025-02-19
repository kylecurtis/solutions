#include <iostream>
#include <string>
#include <cassert>

std::string number_to_string(int num) {
    return std::to_string(num);
}

void runTests() {
    assert(number_to_string(123) == "123");
    assert(number_to_string(999) == "999");
    assert(number_to_string(-100) == "-100");
    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
