/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/12/20
**/

#include <stdio.h>

int main(void) {
    char str[20];
    printf("Enter your desired filename followed by '.txt' ");
    scanf("%s", str);

    FILE *outputFile = fopen(str, "w");;
    FILE *inputFile = fopen("data.txt", "r");
    char c;
    /* open files for writing*/
    if (inputFile == NULL) {
        return (1);
    }
    if (outputFile == NULL)
        return (1);    /* need to do explicit ERROR CHECKING */

    /* write some data into the file */
    c = fgetc(inputFile);
    while (c != EOF) {
        fputc(c, outputFile);
        c = fgetc(inputFile);
    }


    /* don’t forget to close file handles */
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
