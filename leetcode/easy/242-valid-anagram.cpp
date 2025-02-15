#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<int> counter(26, 0);
        for (int i = 0; i < s.size(); i++) {
            counter[s[i] - 'a']++;
            counter[t[i] - 'a']--;
        }

        for (int count: counter) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};

void runTests() {
    Solution sol;

    // Test Case 1
    {
        string s = "anagram";
        string t = "nagaram";
        bool expected = true;
        bool result = sol.isAnagram(s, t);
        assert(result == expected);
        cout << "Test Case 1 Passed!" << endl;
    }

    // Test Case 2
    {
        string s = "rat";
        string t = "car";
        bool expected = false;
        bool result = sol.isAnagram(s, t);
        assert(result == expected);
        cout << "Test Case 2 Passed!" << endl;
    }

    // Test Case 3: Edge case with empty strings
    {
        string s = "";
        string t = "";
        bool expected = true;
        bool result = sol.isAnagram(s, t);
        assert(result == expected);
        cout << "Test Case 3 Passed!" << endl;
    }
}

int main() {
    runTests();
    cout << "All tests passed!" << endl;
    return 0;
}
