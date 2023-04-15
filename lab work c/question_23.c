#include <stdio.h>
// Write a C program to calculate average of array elements.

int main()
{
    int array[100], x, i, sum = 0;

    printf("Enter the number of elements in the array = ");
    scanf("%d", &x);

    printf("Enter the %d elements =\n", x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Sum of array's elements = %d\n", sum);

    return 0;
}