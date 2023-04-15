#include <stdio.h>
//Write a C program to demonstrate type conversion from to int to char.
void another_way();
int main(){
printf("Conversion of int to char is given below:\n");
int integer;
    for(integer=0;integer<=127;integer++){
    
        printf("The value of %d is %c:\n ",integer,integer);
    }
    void another_way();
}
void another_way(){
    int integer;
    printf("Enter any numarical value to change it into character:\n");
    scanf("%d",&integer);
    printf("The value of %d is %c\n",integer,integer);
}//correct