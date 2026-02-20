/*2614. Prime In diagonal
You are given a 0 indexed two dimensional integer array nums. Return the largest prime number that lies on at least one of the diagonals of nums.
In case number is prime on amy of the diagonal return 0*/
#include<stdio.h>
#include<stdbool.h>

    bool isPrime(int p){
        if(p<2){
            return false;
        }
        for(int i=2;i^2<p;i++){
            if(p%i==0){
                return false;
            }
            else{
                return true;
            }
        }
    }
    int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(){
    int rows, cols;
    printf("Enter the number of rows and cols:");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter the matrix elements: ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    int largest_prime = 0;
    for(int i=0;i<rows;i++){
        if(isPrime(mat[i][i])){
            largest_prime = max(largest_prime, mat[i][i]);
        }
    }
    for(int i=0;i<rows;i++){
        if(isPrime(mat[i][rows-i-1])){
            largest_prime = max(largest_prime, mat[i][rows-i-1]);
        }
    }
    printf("The largest prime is: %d", largest_prime);

}