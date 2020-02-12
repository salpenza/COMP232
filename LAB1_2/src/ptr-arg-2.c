/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/12/20
**/

#include <stdio.h>

void swapStrings(char **, char **);

int main(void) {
    char *string1 = "Hello";
    char *string2 = "Goodbye";

    printf("string 1 has value \"%s\" starting at address %p\n", string1, string1);
    printf("string 2 has value \"%s\" starting at address %p\n\n", string2, string2);

    swapStrings(&string1, &string2);

    printf("After the swap: string1 = %s and string2 = %s\n", string1, string2);

    return 0;
}

void swapStrings(char **s1, char **s2) {
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
