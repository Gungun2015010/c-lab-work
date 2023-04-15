#include <stdio.h>
// C program to print a Multiplication table of numbers using a while loop,do while and for loop.
int main()
{
    int gungun, table;
    printf("Enter any number to print any numbers's table:\n");
    scanf("%d", &gungun);
    for (int i = 1; i <= 10; i++)
    {
        table = gungun * i;
        printf("%d X %d = %d\n", gungun, i, table);
    }
    return 0;
}