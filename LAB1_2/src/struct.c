/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/16/20
**/

#include <stdio.h>
#include <stdlib.h>
#include "person.h"


int main(void) {
    int numberOfEmployees = 0;
    printf("How many employees?\n");
    scanf("%d", &numberOfEmployees);
    PERSON *employees[numberOfEmployees];

    for(int i = 0; i < numberOfEmployees; i++){
        employees[i] = malloc(sizeof(PERSON));
        addEmployee(employees[i]);
    }
    displayAllEmployees(employees, numberOfEmployees);
    return 0;
}
