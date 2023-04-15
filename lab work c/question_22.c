#include <stdio.h>
//Write a program in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>

int main() {
    int x, i;

    printf("Enter the number of values = ");
    scanf("%d", &x);

    int array[x];
    printf("Enter %d values =\n", x);

    
    for(i=0; i<x; i++) {
        scanf("%d", &array[i]);
    }

    printf("Values in reverse order =\n");
    for(i=x-1; i>=0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}