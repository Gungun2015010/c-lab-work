
#include <stdio.h>

int main(){
    // Write a program in C to store elements in an array and print it.

    int size, a;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter %d elements in the array:\n", size);
    for (a = 0; a < size; a++) {
        scanf("%d", &array[a]);
    }
    
    printf("The elements in the array are:\n");
    for (a = 0; a < size; a++) {
        printf("%d ", array[a]);
    }
    
    return 0;
}