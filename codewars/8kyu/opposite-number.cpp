#include <iostream>
#include <cassert>

int opposite(int number) {
    return number * -1;
}

void runTests() {
    assert(opposite(123) == -123);
    assert(opposite(-999) == 999);
    assert(opposite(0) == 0);
    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
