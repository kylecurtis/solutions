# SOLUTION
# ==============================================================================
def repeat_str(repeat, string):
    return string * repeat

# TESTS
# ==============================================================================
if __name__ == "__main__":
    assert repeat_str(4, "a") == "aaaa", "Test case 1 failed"
    assert repeat_str(3, "abc") == "abcabcabc", "Test case 2 failed"
    assert repeat_str(0, "hello") == "", "Test case 3 failed"
    assert repeat_str(2, "") == "", "Test case 4 failed"
    assert repeat_str(5, "xyz") == "xyzxyzxyzxyzxyz", "Test case 5 failed"
    print("All test cases passed!")
