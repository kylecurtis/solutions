#include <iostream>
#include <vector>
#include <cassert>

int count_sheep(std::vector<bool> arr) {
    int sum{0};
    for (bool b: arr) {
        if (b) {
            sum++;
        }
    }
    return sum;
}

void runTests() {
    std::vector<bool> array1 = {
        true, true, true, false,
        true, true, true, true,
        true, false, true, false,
        true, false, false, true,
        true, true, true, true,
        false, false, true, true
    };
    assert(count_sheep(array1) == 17);
    std::cout << "Test passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
