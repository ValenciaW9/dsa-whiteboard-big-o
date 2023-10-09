void assertEqual(int actual, int expected) {
if (actual == expected) {
std::cout << "Test Passed! Expected: " << expected << ", Actual: " << actual << std::endl;
} else {
std::cout << "Test Failed! Expected: " << expected << ", Actual: " << actual << std::endl;
}
}