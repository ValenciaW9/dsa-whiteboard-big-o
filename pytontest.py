

Test helper function for Python
def assert_equal(actual, expected):
if actual == expected:
print(f"Test Passed! Expected: {expected}, Actual: {actual}")
else:
print(f"Test Failed! Expected: {expected}, Actual: {actual}")