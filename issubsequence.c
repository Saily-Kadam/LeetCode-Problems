/*Is subsequence
Given two strings s and t, return true if s is a subseuence of t or false otherwise*/
#include<stdio.h>
#include<string.h>
int main() {
    char s[] = "" ;
    char t[]= "";
    int sz1 = 0;
    int sz2 = 0;
    int cnt = 0;
    int x =0, y=0;
    printf("Enter the size of s:");
    scanf("%d", &sz1);
    printf("Enter the size of t:");
    scanf("%d", &sz2);
    printf("enter the char of s :");
    for(int i=0;i<sz1;i++){
        scanf("%c",&s[i]);
    }
    printf("Enter the char of t: ");
    for(int j=0;j<sz2;j++){
        scanf("%c",&t[j]);
    }
    if(sz1> sz2){
        printf("False");
    }
    while(x<sz1 && y<sz2){
        if(s[x] == t[y]){
            x++;
            y++;
            cnt++;
        }
        else{
            y++;
        }
    }
    if(sz1==cnt){
        printf("True");
    }
    else{
        printf("False");
    }

}
