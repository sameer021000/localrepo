#include <stdio.h>

// Function to find the majority element in the array
int findMajorityElement(int nums[], int n) {
    // Outer loop to pick each element one by one
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Inner loop to count occurrences of the current element
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        // Check if the current element is the majority element
        if (count > n / 2) {
            return nums[i];
        }
    }

    // Return -1 if no majority element is found
    return -1;
}

int main() {
    int nums[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(nums) / sizeof(nums[0]); // Calculate the size of the array

    int result = findMajorityElement(nums, n);

    if (result != -1) {
        printf("The majority element is: %d\n", result);
    } else {
        printf("No majority element found.\n");
    }

    return 0;
}
