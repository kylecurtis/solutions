# SOLUTION
# ==============================================================================
def abbrev_name(name):
    first, last = name.split()
    return f"{first[0].upper()}.{last[0].upper()}"

# TESTS
# ==============================================================================
if __name__ == "__main__":
    assert abbrev_name("Sam Harris") == "S.H", "Test case 1 failed"
    assert abbrev_name("patrick feeney") == "P.F", "Test case 2 failed"
    assert abbrev_name("Evan Cole") == "E.C", "Test case 3 failed"
    assert abbrev_name("peter parker") == "P.P", "Test case 4 failed"
    assert abbrev_name("Bruce Wayne") == "B.W", "Test case 5 failed"
    print("All test cases passed!")
