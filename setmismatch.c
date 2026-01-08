/*You have a set of integers s, which originally contains all the numbers from 1 to n. 
Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set,
which results in repetition of one number and loss of another number. You are given an integer array 
nums represented the data status of this set after the error. Find the number that 
occurs twice and the number that is missing and return them in the form of an array
*/
#include <stdio.h>
#include <stdlib.h>

int* findErrorNums(int* nums, int n) {
    int *freq = (int *)calloc(n + 1, sizeof(int));
    int *result = (int *)malloc(2 * sizeof(int));

    if (freq == NULL || result == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }

    // Count frequency
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    // Find duplicate and missing
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2)
            result[0] = i;   // duplicate
        else if (freq[i] == 0)
            result[1] = i;   // missing
    }

    free(freq);
    return result;
}

int main() {
    int n;
    int *nums, *ans;

    printf("Enter value of n: ");
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

    ans = findErrorNums(nums, n);

    printf("Duplicate number: %d\n", ans[0]);
    printf("Missing number: %d\n", ans[1]);

    free(nums);
    free(ans);

    return 0;
}