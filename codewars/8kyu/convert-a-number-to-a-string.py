# SOLUTION
# ==============================================================================
def number_to_string(num):
    return str(num)

# TESTS
# ==============================================================================
if __name__ == "__main__":
    assert number_to_string(123) == "123", "Test case 1 failed"
    assert number_to_string(0) == "0", "Test case 2 failed"
    assert number_to_string(-123) == "-123", "Test case 3 failed"
    assert number_to_string(999999) == "999999", "Test case 4 failed"
    assert number_to_string(-999999) == "-999999", "Test case 5 failed"
    print("All test cases passed!")
