#include <stdio.h>
//Write a program to multiplay two matrices.

int main() {
    int row1, col1, row2, col2;

    printf("Enter the number of rows and cols of the 1st matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the number of rows and cols of the 2nd matrix: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrices cannot be multiplied\n");
        return 0;
    }

    int a[row1][col1], b[row2][col2], c[row1][col2];

    printf("Enter the elements of the 1st matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the 2nd matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < row1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("Resultant matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}//correct