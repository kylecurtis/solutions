# SOLUTION
# ==============================================================================
def make_negative(number):
    return number if number <= 0 else -number

# TESTS
# ==============================================================================
if __name__ == "__main__":
    assert make_negative(1) == -1, "Test case 1 failed"
    assert make_negative(-5) == -5, "Test case 2 failed"
    assert make_negative(0) == 0, "Test case 3 failed"
    assert make_negative(42) == -42, "Test case 4 failed"
    print("All test cases passed!")
