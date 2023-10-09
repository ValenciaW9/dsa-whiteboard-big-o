
//Problem:
//Given an array of integers, find the sum of all the elements.

//The Solution in O(n) time complexity:


int sumOfElements(std::vector& nums) {
int sum = 0;
for (int num : nums) {
sum += num;
}
return sum;
}

int main() {
std::vector nums = {1, 2, 3, 4, 5};
int result = sumOfElements(nums);
std::cout << "Sum of elements: " << result << std::endl;
return 0;
}
```

//Explanation: In the solution above, we iterate through each element in the array and add it to the sum variable. After iterating through all the elements, we return the sum.

//Solution in O(1) time complexity:


#include <iostream>
#include <vector>

int sumOfElements(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size();
    int expectedSum = (n * (n + 1)) / 2; // Sum of n natural numbers formula
    int actualSum = sumOfElements(nums);

    if (actualSum == expectedSum) {
        std::cout << "Sum of elements: " << actualSum << std::endl;
    } else {
        std::cout << "Invalid input array" << std::endl;
    }

    return 0;
}

//Explanation: In this solution, we take advantage of the formula for the sum of n natural numbers, which is sum = (n * (n + 1)) / 2. We calculate the expected sum based on the number of elements in the array. Then, we calculate the actual sum by iterating through each element and adding it to the sum variable. Finally, we compare the actual sum with the expected sum to validate the input array.
