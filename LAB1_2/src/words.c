/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/5/20
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 128

int main(void) {
    char *words[MAX_SIZE];
    char buffer[100];
    int size;
    char *ptr;
    printf("Enter words (enter \"END\" to stop):\n");

    for (int i = 0; i < MAX_SIZE; i++) {
        scanf("%s", &buffer);
        size = strlen(buffer);
        if (strcmp(buffer, "END") != 0) {
            ptr = (char *) calloc(size, sizeof(char));
            strcpy(ptr, buffer);
            words[i] = ptr;

        }
    }

    for(int j = 0; j < MAX_SIZE; j++){
        printf(words[j]);
        free(words[j]);
    }

}

