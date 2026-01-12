/*You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers 
cannot be planted in adjacent plots. Given an integer array flowered containing 0's and 1's, where 0 
means empty and 1 means not empty and an integer n, return true if n new flowers can be planted in the 
flowerbed without violating the non adjacent flowers rule and false otherwise. Write a c program*/
#include <stdio.h>

int canPlaceFlowers(int flowerbed[], int size, int n) {
    for (int i = 0; i < size; i++) {

        // Check if current plot is empty
        if (flowerbed[i] == 0) {

            // Check left and right plots
            int left = (i == 0) ? 0 : flowerbed[i - 1];
            int right = (i == size - 1) ? 0 : flowerbed[i + 1];

            // If both neighbors are empty
            if (left == 0 && right == 0) {
                flowerbed[i] = 1;  // plant flower
                n--;

                if (n == 0)
                    return 1; // true
            }
        }
    }
    return 0; // false
}

int main() {
    int flowerbed[] = {1, 0, 0, 0, 1};
    int n = 1;
    int size = sizeof(flowerbed) / sizeof(flowerbed[0]);

    if (canPlaceFlowers(flowerbed, size, n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}