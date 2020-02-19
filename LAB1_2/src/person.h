/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/16/20
**/

#ifndef C_TUT_PERSON_H
#define C_TUT_PERSON_H

typedef char NAME[41];

typedef struct date {
    int month;
    int day;
    int year;
}DATE;

typedef struct person {
    NAME name;
    int age;
    float height;
    DATE bday;
}PERSON;

void addEmployee(PERSON *employee);
void displayEmployee(PERSON *employee);
void displayAllEmployees(PERSON *employees[], int numberOfEmployees);

#endif //C_TUT_PERSON_H
