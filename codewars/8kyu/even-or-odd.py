# SOLUTION
# ==============================================================================
def even_or_odd(number):
    return "Even" if number % 2 == 0 else "Odd"

# TESTS
# ==============================================================================
if __name__ == "__main__":
    assert even_or_odd(1) == "Odd", "Test case 1 failed"
    assert even_or_odd(2) == "Even", "Test case 2 failed"
    assert even_or_odd(-1) == "Odd", "Test case 3 failed"
    assert even_or_odd(-2) == "Even", "Test case 4 failed"
    assert even_or_odd(0) == "Even", "Test case 5 failed"
    print("All test cases passed!")
