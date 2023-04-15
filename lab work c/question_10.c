#include <stdio.h>
// Write a program in C to find whether a number is even or odd.

int main()
{
    int num1;
    printf("Enter any number to determine the number is odd or even:\n");
    scanf("%d", &num1);
    if (num1 % 2 == 0)
    {
        printf("the value %d is even.\n", num1);
    }
    else
    {
        printf("The value %d is odd.\n", num1);
    }
    return 0;
}//correct