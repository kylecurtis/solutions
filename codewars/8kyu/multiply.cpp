#include <cassert>
#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

void runTests() {
    assert(multiply(2, 3) == 6);
    assert(multiply(-2, 3) == -6);
    assert(multiply(-2, -3) == 6);
    assert(multiply(0, 5) == 0);
    assert(multiply(7, 1) == 7);

    cout << "All tests passed!" << endl;
}

int main() {
    runTests();
    return 0;
}
