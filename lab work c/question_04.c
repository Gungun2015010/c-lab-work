#include <stdio.h>
//Write a C program to Perform all Arithmetic Operations on Two Integers in one program
int main(){
    int a;
    int b;
    printf("Enter two integer to perform arithmetic operations:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d X %d = %d\n",a,b,a*b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
    return 0;
}//correct