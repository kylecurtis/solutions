#include <iostream>
#include <string>
#include <cassert>

std::string repeat_str(size_t repeat, const std::string &str) {
    std::string result{};
    for (int i = 0; i < repeat; ++i) {
        result.append(str);
    }
    return result;
}

void runTests() {
    assert(repeat_str(3, "*") == "***");
    assert(repeat_str(5, "#") == "#####");
    assert(repeat_str(2, "ha ") == "ha ha ");
    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
