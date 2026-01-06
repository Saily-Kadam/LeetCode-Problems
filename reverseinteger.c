/*7. Reverse Integer
Given a signed 32 bit integer x, return x with its digits reversed. If reversing x causes the value to 
go outside the signed 32 bit integer range[-2 ^31,2 ^ 31, -1], then return 0
Eg1: input x= 123
output: 321*/
#include <stdio.h>
#include <limits.h>   // for INT_MAX and INT_MIN

int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x = x / 10;

        // Check for overflow
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
            return 0;

        rev = rev * 10 + digit;
    }

    return rev;
}

int main() {
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Reversed integer: %d", reverse(x));

    return 0;
}