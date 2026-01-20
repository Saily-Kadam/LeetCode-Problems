/*1732. Find the highest Altitude
There is a bike rider going on a road trip. The road trip consists of n+1 points at different 
altitudes. The biker starts his trip on point 0 with altitude equal to 0. You are given an integer
array gain of length n where gain[i] is the net gain in altitude between points i and i+1 for
all (0<=i<n). Return the height altitude of a point*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int maxA =0, currA =0;
    int n=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int *gain =(int*)malloc(n);
    printf("Enter the elemets of array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &gain[i]);
    }
    for(int i=0;i<n;i++){
        currA = currA+gain[i];
        if(currA>maxA){
            maxA = currA;
        }
    }
    printf("Max altitude = %d", maxA);

}