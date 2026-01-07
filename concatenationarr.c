/*Given an array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] 
and ans[i+n] = num[i]  for 0<=i< n (o indexed). Specifically ans is the concatenation of
two nums arrays*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *nums, *ans;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for nums
    nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Allocate memory for ans (size 2n)
    ans = (int *)malloc(2 * n * sizeof(int));
    if (ans == NULL) {
        printf("Memory allocation failed!");
        free(nums);
        return 1;
    }

    // Concatenate nums with itself
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    // Print result
    printf("Concatenated array:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", ans[i]);
    }

    // Free memory
    free(nums);
    free(ans);

    return 0;
}