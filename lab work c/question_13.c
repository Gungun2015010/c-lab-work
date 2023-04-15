#include <stdio.h>
// Program to Find if a given Year is a Leap Year.

int main()
{
    int leap;
    printf("Enter the year:\n");
    scanf("%d", &leap);
    if (leap % 4 == 0)
    {
        printf("The year is leap year:\n");
    }
    else if (leap % 100 == 0)
    {
        printf("The year is not leap year:\n");
    }
    else if (leap % 400 == 0)
    {
        printf("The year is leap year:\n");
    }
    else
    {
        printf("The year is not a leap year:\n");
    }
    return 0;
}//correct