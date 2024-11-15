# SOLUTION
# ==============================================================================
def solution(string):
    return string[::-1]

# SOLUTION
# ==============================================================================
if __name__ == "__main__":
    assert solution("world") == "dlrow", "Test case 1 failed"
    assert solution("hello") == "olleh", "Test case 2 failed"
    assert solution("") == "", "Test case 3 failed"
    assert solution("a") == "a", "Test case 4 failed"
    assert solution("12345") == "54321", "Test case 5 failed"
    print("All test cases passed!")
