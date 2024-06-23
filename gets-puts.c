#include <stdio.h>
#include <string.h>

int main() {
    // declare char variable
    char name[30];
    printf("Enter your name");
    // get name from user by the scanf.its not catch space and full line text its catch only one word before space
    
        // scanf("%s", &name);

    // get name from user by the "gets". its unsafe but its take full one line completed text.
        
        // gets(name);  //its unsafe cause here no declare char qty

        // pass a parameter (char length with sizeof function and standard input "stdin")
        fgets(name, sizeof(name), stdin);
    // remove space from new line 
    // strlen return specific char which user can use
    size_t length = strlen(name);
    if(name[length - 1] = '\n') {
        name[length -1] = '\0';
    }
    // output
        // printf("\nWelcome :%s", name);
    // use of "puts" no need extra info for print only nedd respective variable.
        puts(name);
    return 0;
}