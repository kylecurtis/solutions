#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string reverseString (string str) {
    reverse(str.begin(), str.end());
    return str;
}

void runTests() {
    assert(reverseString("hello") == "olleh");
    assert(reverseString("rat") == "tar");
    assert(reverseString("alpha") == "ahpla");
    cout << "All tests passed!";
}

int main() {
    runTests();
    return 0;
}