#include <stdio.h>
//Write a program to sum two matrices.
int main() {
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

 int matrix1[row][column], matrix2[row][column], sum[row][column];
    
    printf("Enter the values of first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter the values of second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) { 
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The sum of the matrices is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}//correct
