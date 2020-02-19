/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/5/20
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main(void) {
    char *words[MAX_SIZE];
    char buffer[100];
    int size;
    int count = 0;

    puts("Enter words (enter \"END\" to stop):");
    scanf("%s", &buffer);
    size = strlen(buffer);

    while(strcmp("END", buffer) != 0){
        words[count] = (char *) calloc(size, sizeof(char));
        strcpy(words[count], buffer);
        scanf("%s", &buffer);
        count++;
    }
    printf("The following %d words have been read: \n", count);

    for(int j = 0; j < count; j++){
        printf("%s\n", words[j]);
        free(words[j]);
    }
    return 0;
}

