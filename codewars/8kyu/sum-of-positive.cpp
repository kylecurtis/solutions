#include <iostream>
#include <vector>
#include <cassert>

int positive_sum(const std::vector<int> arr) {
    int total{0};
    for (int num: arr) {
        if (num > 0) {
            total += num;
        }
    }
    return total;
}

void runTests() {
    std::vector<int> a{1, 2, 3, 4};
    assert(positive_sum(a) == 10);

    std::vector<int> b{-1, -2, -3, -4};
    assert(positive_sum(b) == 0);

    std::vector<int> c{0, -10, 20, -30};
    assert(positive_sum(c) == 20);

    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
