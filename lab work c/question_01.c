// Write a program in C to print ASCII values.
#include <stdio.h>
void another_way();
// WE CAN WHRITE A PROGRAM TO DETERMINE WHAT IS UPPER-CASE ALPHABETS OR LOWER-CASE ALPHABETS
int main()
{
    int alphabets;
    printf("Enter any numberber to determine the number is uppercase or lowecase according to the  ASCII table:\n"
           "Enter any value between 65 to 122:\n");
    scanf("%d", &alphabets);
    if (alphabets >= 65 && alphabets <= 90)
    {
        printf("the value is an uppercase according to ASCII table\n");
    }
    else if (alphabets >= 97 && alphabets <= 122)
    {
        printf("the value is an lowercase according to ASCII table\n");
    }
    another_way();
    return 0;
}
void another_way()
{
    // WE CAN WHRITE H PROGRAM TO DETERMINE WHAT IS UPPER-CASE ALPHABETS OR LOWER-CASE ALPHABEts
    int uppercase, lowercase;
    printf("Enter any value to determine the value is uppercase or lowercase:\n");
    scanf("%d", &uppercase);
    if (uppercase >= 65 && uppercase <= 90)
    {
        for (uppercase = 65; uppercase <= 90; uppercase++)
        {
            printf("The value of %c is %d:\n", uppercase, uppercase);
        }
    }

    else
    {
        for (lowercase = 97; lowercase <= 122; lowercase++)
        {
            printf("The value of %c is %d:\n", lowercase, lowercase);
        }
    }
}
// correct