#include <iostream>
#include <string>
#include <cassert>

std::string bool_to_word(bool value) {
    return value ? "Yes" : "No";
}

void runTests() {
    assert(bool_to_word(true) == "Yes");
    assert(bool_to_word(false) == "No");
    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
