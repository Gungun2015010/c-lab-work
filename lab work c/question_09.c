#include <stdio.h>
// Write a C program to find the largest among four numbers.

int main()
{
    int num;
    int num1;
    int num2;
    int num3;
    printf("Enter any value to find largest number:\n");
    scanf("%d", &num);
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num > num1)
    {
        printf("The %d is largest than %d", num, num1);
    }
    else if (num1 > num2)
    {
        printf("The %d is largest than %d", num1, num2);
    }
    else if (num2 > num3)
    {
        printf("The %d is largest than %d", num2, num3);
    }
    

    return 0;
}//not correct