#include <stdio.h>
// Write a program in C to find whether a character is vowel or consonant using if statement.

int main()
{
    char a;
    printf("Enter any alphabet to determine the alphabet is vowel or consonant:\n");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
        printf("A IS VOWEL\n");
        break;
    case 'e':
        printf("E IS VOWEL\n");
        break;
    case 'i':
        printf("I IS VOWEL\n");
        break;
    case 'o':
        printf("O IS VOWEL\n");
        break;
    case 'u':
        printf("U IS VOWEL\n");
        break;
    default:
        printf("ALPHABET IS CONSONANT");
    }
    return 0;
}//correct