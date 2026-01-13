/*1768. Merge Strings Alternately
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
starting with word1. If a string is longer than the other, append the additional letters on to the
end of the merged string. Return the merged string*/
#include <stdio.h>
#include <string.h>

void mergeAlternately(char word1[], char word2[], char result[]) {
    int i = 0, j = 0, k = 0;

    // Add characters alternately
    while (word1[i] != '\0' && word2[j] != '\0') {
        result[k++] = word1[i++];
        result[k++] = word2[j++];
    }

    // Append remaining characters of word1
    while (word1[i] != '\0') {
        result[k++] = word1[i++];
    }

    // Append remaining characters of word2
    while (word2[j] != '\0') {
        result[k++] = word2[j++];
    }

    result[k] = '\0'; // null terminate result
}

int main() {
    char word1[100], word2[100], merged[200];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    mergeAlternately(word1, word2, merged);

    printf("Merged string: %s\n", merged);

    return 0;
}