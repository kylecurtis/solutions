#include <iostream>
#include <vector>
#include <cassert>

int square_sum(const std::vector<int> &numbers) {
    int sum{0};
    if (!numbers.empty()) {
        for (int num: numbers) {
            sum += num * num;
        }
    }
    return sum;
}

void runTests() {
    std::vector<int> a{1, 2};
    assert(square_sum(a) == 5);

    std::vector<int> b{0, 3, 4, 5};
    assert(square_sum(b) == 50);

    std::vector<int> c{};
    assert(square_sum(c) == 0);

    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
