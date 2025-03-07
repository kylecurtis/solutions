#include <iostream>
#include <cassert>

int makeNegative(int num) {
    return num > 0 ? num * -1 : num;
}

void runTests() {
    assert(makeNegative(1) == -1);
    assert(makeNegative(-5) == -5);
    assert(makeNegative(0) == 0);
    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
