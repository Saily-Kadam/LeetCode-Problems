/*73. Set Matrix Zeros
Given an m by n integer matrix matrix, if an element is 0, set its entire and columns to 0's*/
#include<stdio.h>
int main(){
    int rows, cols;
    printf("Enter the number of rows and cols: \n");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter the elements:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
   
    int rowZero[rows];
    int colZero[cols];
    for(int i=0;i<rows;i++){
    rowZero[i]=0;
    for(int j=0;j<cols;j++){
    colZero[j]=0;
    }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        if(matrix[i][j] == 0){
            rowZero[i]=1;
            colZero[j]=1;
        }
    }
}

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        if(rowZero[i]==1||colZero[j]==1){
            matrix[i][j] = 0;
        }
    }
}
printf("Result matrix: \n");
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("%d", matrix[i][j]);
    }
    printf("\n");
}
return 0;
    
}