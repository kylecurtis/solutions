#include <iostream>
#include <string>
#include <cassert>

std::string greet() {
    return "hello world!";
}

void runTest() {
    assert(greet() == "hello world!");
    std::cout << "Test passed!" << '\n';
}

int main() {
    runTest();
    return 0;
}

