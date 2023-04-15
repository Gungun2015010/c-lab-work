#include <stdio.h>
// C program to find the reverse of a number using do-while.

int main()
{
    int gungun=0,n;
    printf("Enter any number:");
    scanf("%d",&n);
    do
    {
        printf("The number is %d\n", gungun);
        ++gungun;
    } while (gungun<=n);
    return 0;
}//correct