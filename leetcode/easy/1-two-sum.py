from typing import List

# SOLUTION
# ==============================================================================
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for index, value in enumerate(nums):
            complement = target - value
            if complement in seen:
                return [seen[complement], index]
            seen[value] = index
        return []

# TESTS
# ==============================================================================
if __name__ == "__main__":
    solution = Solution()
    assert solution.twoSum([2, 7, 11, 15], 9) == [0, 1], "Test case 1 failed"
    assert solution.twoSum([3, 2, 4], 6) == [1, 2], "Test case 2 failed"
    assert solution.twoSum([-1, -2, -3, -4, -5], -8) == [2, 4], "Test case 3 failed"
    print("All test cases passed!")
