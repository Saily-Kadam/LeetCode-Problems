/*Given the array nums consisting of 2n elements in the form [x1,x2,...xn, y1, y2, yn]. Return the array
in the form [x1, y1, x2, y2,.....xn,yn]
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *nums, *ans;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // Allocate memory for nums (size = 2n)
    nums = (int *)malloc(2 * n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements:\n", 2 * n);
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &nums[i]);
    }

    // Allocate memory for shuffled array
    ans = (int *)malloc(2 * n * sizeof(int));
    if (ans == NULL) {
        printf("Memory allocation failed!");
        free(nums);
        return 1;
    }

    // Shuffle the array
    for (int i = 0; i < n; i++) {
        ans[2 * i]     = nums[i];       // xi
        ans[2 * i + 1] = nums[i + n];   // yi
    }

    // Print result
    printf("Shuffled array:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", ans[i]);
    }

    // Free memory
    free(nums);
    free(ans);

    return 0;
}