#include <iostream>
#include <cassert>

int summation(int num) {
    return num * (num + 1) / 2;
}

void runTests() {
    assert(summation(1) == 1);
    assert(summation(2) == 3);
    assert(summation(8) == 36);
    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
