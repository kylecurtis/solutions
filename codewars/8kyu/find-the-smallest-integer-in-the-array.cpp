#include <iostream>
#include <vector>
#include <cassert>

int findSmallest(std::vector<int> list) {
    int min{list[0]};
    for (int i = 1; i < list.size(); ++i) {
        if (list[i] < min) {
            min = list[i];
        }
    }
    return min;
}

void runTests() {
    std::vector<int> a{3, 5, 2};
    assert(findSmallest(a) == 2);

    std::vector<int> b{12, 0, -27};
    assert(findSmallest(b) == -27);

    std::vector<int> c{-12, -52, -27};
    assert(findSmallest(c) == -52);

    std::cout << "All tests passed!" << '\n';
}

int main() {
    runTests();
    return 0;
}
