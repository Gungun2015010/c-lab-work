#include <stdio.h>
//Write a program in C to swap two numbers.
int main(){
    int a,b,c;
    printf("Enter two numbers to swap it:\n");
    printf("Enter 1st number:\n");
    scanf("%d",&a);
    printf("Enter 2nd number:\n");
    scanf("%d",&b);
    printf("The current value is A = %d and B = %d:\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping the numbers now A = %d and B = %d:\n",a,b);
    return 0;
}//correct