#include <iostream>
#include <string>
#include <cassert>

std::string sliceString(std::string str) {
    return str.substr(1, str.length() - 2);
}

void runTests() {
    assert(sliceString("tuna") == "un");
    assert(sliceString("rats") == "at");
    assert(sliceString("code") == "od");
    assert(sliceString("ok").empty());
    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
