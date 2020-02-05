//
// Created by Penza, Salvatore on 2020-02-05.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 128
int main(void){
    char *words[MAX_SIZE];
    char buffer[100];
    int size;
    char *ptr;
    printf("Enter words (enter \"END\" to stop):\n");
    scanf("%s", &buffer);
    size = strlen(buffer);
    while(strcmp(buffer,"END") != 0){
        ptr = (char*)calloc(size,  sizeof(char));
        strcpy(ptr, buffer);
        words[0] = ptr;
    }
}

