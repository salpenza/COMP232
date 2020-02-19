/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/12/20
**/
#include <stdio.h>

int add(int, int);

int subtract(int, int);

int multiply(int, int);

int divide(int, int);

int calc(int (*)(int, int), int, int);

int main(void) {
    int num1;
    int num2;
    char operator;
    while(1) {
        scanf("%i %c %i", &num1, &operator, &num2);
        int (*f)(int, int);

        if (operator == '+') {
            f = add;
        } else if (operator == '-') {
            f = subtract;
        } else if (operator == '*') {
            f = multiply;
        } else if (operator == '/') {
            f = divide;
        } else {
            return (1);
        }

        printf("%i \n", calc(f, num1, num2));
    }
}

int calc(int (*f)(int, int), int num1, int num2) {
    return (*f)(num1, num2);
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, num2) {
    return num1 - num2;
}

int multiply(int num1, num2) {
    return num1 * num2;
}

int divide(int num1, num2) {
    return num1 / num2;
}

