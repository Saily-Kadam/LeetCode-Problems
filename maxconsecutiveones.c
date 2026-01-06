/*485. MAX Consecutive ones.
Given a binary array nums, retuurn the maximum number of consecutive is in the array
Eg1: input nums = [1,1,0,1,1]
output: 3
*/
#include <stdio.h>
#include <stdlib.h>

int findMaxConsecutiveOnes(int nums[], int n) {
    int count = 0, maxCount = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            count++;
            if (count > maxCount)
                maxCount = count;
        } else {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    int n;
    int *nums;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    nums = (int *)malloc(n * sizeof(int));

    if (nums == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d binary elements (0 or 1):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Maximum consecutive 1s: %d",
           findMaxConsecutiveOnes(nums, n));

    // Free memory
    free(nums);

    return 0;
}