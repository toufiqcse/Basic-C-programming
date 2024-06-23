#include <stdio.h>

int main () {
    // declare variable
    char character;

    printf("Please enter a character");
    // get only one character from user input
     character = getchar();

     printf("You Entered : ");
    //  output
     putchar(character);
    return 0;
}