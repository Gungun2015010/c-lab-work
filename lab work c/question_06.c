#include <stdio.h>
// Write a C program to calculate perimeter and area of a circle.
int main(){
    //FORMULA OF CALCULATE AREA OF A CIRCLE = PAI*R*R
    float area,pai=3.14;
    int r;
    printf("Enter the radius of a circle:\n");
    scanf("%d",&r);
area=pai*r*r;
printf("the area of a circle is %.2f\n",area);
    return 0;
}//correct