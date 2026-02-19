/*TWO SUM
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.
Eg: nums = [2,7,11,15] target = 9
output = [0,1]
Write a c program*/
#include <stdio.h>      // Header file for input and output functions

int main() {            // Main function where program execution starts

    int nums[] = {2, 7, 11, 15};   // Array of integers
    int target = 9;               // Target sum value

    int n = sizeof(nums) / sizeof(nums[0]); 
    // Calculate number of elements in the array

    for (int i = 0; i < n; i++) {         
        // Outer loop to pick the first element

        for (int j = i + 1; j < n; j++) { 
            // Inner loop to pick the second element (after i)

            if (nums[i] + nums[j] == target) { 
                // Check if the sum of two elements equals target

                printf("[%d, %d]\n", i, j); 
                // Print the indices of the two numbers

                return 0;   
                // Exit the program since exactly one solution exists
            }
        }
    }

    return 0;   
    // Return 0 indicates successful program execution
}