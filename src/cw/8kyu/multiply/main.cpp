#include "test_runner.hpp"

#include <cassert>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    TestRunner tests;
    tests.check(multiply(2, 3) == 6, "test 1");
    tests.check(multiply(-2, 3) == -6, "test 2");
    tests.check(multiply(-2, -3) == 6, "test 3");
    tests.check(multiply(0, 32) == 0, "test 4");
    return tests.finish();
}
