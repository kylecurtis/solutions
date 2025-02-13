#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (m.find(complement) != m.end()) {
                return {m[complement], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};

// Helper function to compare two vectors regardless of order.
bool vectorsEqual(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

void runTests() {
    Solution sol;

    // Test Case 1
    {
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        vector<int> expected = {0, 1};
        vector<int> result = sol.twoSum(nums, target);
        assert(vectorsEqual(result, expected));
        cout << "Test Case 1 Passed!" << "\n";
    }

    // Test Case 2
    {
        vector<int> nums = {3, 2, 4};
        int target = 6;
        vector<int> expected = {1, 2};
        vector<int> result = sol.twoSum(nums, target);
        assert(vectorsEqual(result, expected));
        cout << "Test Case 2 Passed!" << "\n";
    }

    // Test Case 3
    {
        vector<int> nums = {3, 3};
        int target = 6;
        vector<int> expected = {0, 1};
        vector<int> result = sol.twoSum(nums, target);
        assert(vectorsEqual(result, expected));
        cout << "Test Case 3 Passed!" << "\n";
    }
}

int main() {
    runTests();
    cout << "All tests passed!" << "\n";
    return 0;
}
