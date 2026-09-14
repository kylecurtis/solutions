#include "test_runner.hpp"

#include <string>

std::string even_or_odd(int number) {
    return number % 2 == 0 ? "Even" : "Odd";
}

int main() {
    TestRunner tests;
    tests.check(even_or_odd(10) == "Even", "test 1");
    tests.check(even_or_odd(-10) == "Even", "test 2");
    tests.check(even_or_odd(33) == "Odd", "test 3");
    tests.check(even_or_odd(0) == "Even", "test 4");
    return tests.report();
}
