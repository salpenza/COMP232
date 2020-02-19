/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/16/20
**/

#include <stdio.h>
#include "person.h"

void addEmployee(PERSON *employee) {
    printf("\nEnter information for the next employee.\n");
    printf("Name: ");
    scanf(" %[^\n]", employee->name);
    printf("Age: " );
    scanf("%d", &employee->age);
    printf("Height: ");
    scanf("%f", &employee->height);
    printf("Birthday (MM / DD / YYYY): ");
    scanf("%d/%d/%d", &employee->bday.month, &employee->bday.day, &employee->bday.year);
}

void displayEmployee(PERSON *employee){
    printf("%s:\n", employee->name);
    printf("\tAge: %d\n", employee->age);
    printf("\tHeight: %.1f\n", employee->height);
    printf("\tBirthday: %d/%d/%d\n", employee->bday.month, employee->bday.day, employee->bday.year);
}

void displayAllEmployees(PERSON *employees[], int numberOfEmployees){
    printf("\nDisplaying Employees...\n\n");
    for(int i = 0; i < numberOfEmployees; i++){
        displayEmployee(employees[i]);
    }

}