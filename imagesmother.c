/*661
An image smoother is a filter of the size 3x3 than can be applied to each cell of an image by rounding down the average of the cell and the eight
surrounding cell. If one or more of the surrounding cells of a cell is not present, we don not 
consider it isthe average */
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int result[rows][cols];

    printf("Enter the elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {

            int sum = 0, cnt = 0;

            int SR = (i - 1 < 0) ? 0 : i - 1;
            int ER = (i + 1 >= rows) ? rows - 1 : i + 1;
            int SC = (j - 1 < 0) ? 0 : j - 1;
            int EC = (j + 1 >= cols) ? cols - 1 : j + 1;

            for(int x = SR; x <= ER; x++) {
                for(int y = SC; y <= EC; y++) {
                    sum += matrix[x][y];
                    cnt++;
                }
            }

            result[i][j] = sum / cnt;
        }
    }

    printf("Smoothed Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}