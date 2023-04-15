#include <stdio.h>
// C program to add numbers until the user enters 0 using while loop and do-while loop.

int main()
{
    int number=5, sum, num2=3;
    printf("Enter a number: ");
    scanf("%d", &sum);
    // scanf("%d", &num2);

    if(sum==0){
    do
    {
        sum = number + num2;
        printf("The add of %d and %d is %d",number,num2,sum);
    } while (sum == 0);
    }
    else{
        printf("Number can not add");
    }
    return 0;
}//correct