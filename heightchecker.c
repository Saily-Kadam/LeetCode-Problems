/*A school is trying to take an annual photo of all the students. The students are asked to stand in a 
single file line in non decreasing order by height. Let this ordering be represented by the integer array
expected where expected [i] is the expected height of the ith student in line. You are given an integer
array heights representing the current order that the students are standing in. Each heights [i] is the
height of the ith student in line (0 indexed). Return the number of indices where heights[i] !=
expected[i]. */
#include <stdio.h>

// Function to sort array using Bubble Sort
void sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to count mismatched indices
int heightChecker(int heights[], int n) {
    int expected[n];

    // Copy heights array to expected
    for(int i = 0; i < n; i++)
        expected[i] = heights[i];

    // Sort expected array
    sort(expected, n);

    // Count mismatches
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(heights[i] != expected[i])
            count++;
    }

    return count;
}

int main() {
    int heights[] = {1, 1, 4, 2, 1, 3};
    int n = sizeof(heights) / sizeof(heights[0]);

    int result = heightChecker(heights, n);
    printf("Number of mismatched indices = %d\n", result);

    return 0;
}