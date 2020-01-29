/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 1/29/20
**/
#include <stdio.h>

int main(void) {
    int nStudents = 0; /* Initialization, required */
    float nFaculty = 0;
    printf("How many students does CSUCI have ?:");
    scanf("%d", &nStudents);  /* Read input */
    printf("How many faculty members does CSUCI have ?:");
    scanf("%f", &nFaculty);
    float ratio = (nStudents / nFaculty);
    printf("The ratio of students to faculty at CSUCI is %.1f. \n", ratio);

    return 0;
}
