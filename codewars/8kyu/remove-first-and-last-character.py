# SOLUTION
# ==============================================================================
def remove_char(s):
    return s[1:-1]

# TESTS
# ==============================================================================
if __name__ == "__main__":
    assert remove_char("hello") == "ell", "Test case 1 failed"
    assert remove_char("world") == "orl", "Test case 2 failed"
    assert remove_char("a") == "", "Test case 3 failed"
    assert remove_char("ab") == "", "Test case 4 failed"
    assert remove_char("12345") == "234", "Test case 5 failed"
    print("All test cases passed!")
