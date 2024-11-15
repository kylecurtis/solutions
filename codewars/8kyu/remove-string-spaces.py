# SOLUTION
# ==============================================================================
def no_space(x):
   return x.replace(" ", "")

# TESTS
# ==============================================================================
if __name__ == "__main__":
    assert no_space("hello world") == "helloworld", "Test case 1 failed"
    assert no_space(" python  programming ") == "pythonprogramming", "Test case 2 failed"
    assert no_space("a b c d") == "abcd", "Test case 3 failed"
    assert no_space("   ") == "", "Test case 4 failed"
    assert no_space("no_spaces_here") == "no_spaces_here", "Test case 5 failed"
    print("All test cases passed!")
