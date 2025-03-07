#include <iostream>
#include <string>
#include <cassert>

int string_to_number(const std::string &s) {
    return std::stoi(s);
}

void runTests() {
    assert(string_to_number("123456") == 123456);
    assert(string_to_number("-321405") == -321405);
    assert(string_to_number("0") == 0);
    assert(string_to_number("-0") == 0);
    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
