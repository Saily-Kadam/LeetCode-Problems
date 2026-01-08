/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
 That is, for each num[i] you have to count the number of valid j's such that j != i and
nums[j]< nums[i]. */
#include <stdio.h>
#include <stdlib.h>

int* smallerNumbersThanCurrent(int* nums, int n) {
    int *ans = (int *)malloc(n * sizeof(int));

    if (ans == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && nums[j] < nums[i]) {
                count++;
            }
        }
        ans[i] = count;
    }

    return ans;
}

int main() {
    int n;
    int *nums, *result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    result = smallerNumbersThanCurrent(nums, n);

    printf("Result array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    free(nums);
    free(result);

    return 0;
}