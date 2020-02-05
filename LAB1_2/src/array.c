/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/5/20
**/
#include <stdio.h>

#define MAX_NUM_OF_CELLS 128

int main(void) {
    float sum = 0;
    int size = 0;
    double input = 0;
    double average = 0;

    printf("Provide a desired number of doubles? \n");
    scanf("%d", &size);
    if (size > MAX_NUM_OF_CELLS) {
        size = MAX_NUM_OF_CELLS;
        printf("Size too large... size is now 128. \n");
    } else if (size <= 0) {
        size = 1;
        printf("Size too small... size is now 1. \n");
    }
    double number[size];

    printf("\nProvide the doubles? \n");
    for (int index = 0; index < size; index++) {
        scanf("%lf", &input);  /* fill array will doubles */
        number[index] = input;
    }

    printf("\nData: ");
    for (int index = 0; index < size; index++) {
        printf("%.1lf ", number[index]);
        sum += number[index];  /* sum array elements */
    }
    average = sum / size;
    printf("\nAverage: %.1lf\n", average);

    return 0;
}
