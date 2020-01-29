/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 1/29/20
**/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char level;
    printf("Enter a character (e, f, or h): ");
    level = getchar();

    switch (tolower(level)) {
        case 'e':
            puts("empty");
            break;
        case 'f':
            puts("full");
            break;
        case 'h':
            puts("half full");
            break;
        default:
            puts("Error, invalid input");
            break;
    }

    return 0;
}
