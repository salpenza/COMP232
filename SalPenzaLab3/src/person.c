/**
 * Name: Sal Penza
 * Lab: Lab 3
 * Date: 2/19/2020
**/
#include "person.h"

LIST *head = NULL, *tail = NULL;

void inputPersonalData(PERSON *person)
{
    // TODO implement the function
    // or check out part 9 of the c tutorial ;)
    scanf("%s", person->name);
    scanf("%d", &person->age);
    scanf("%f", &person->height);
    scanf("%d/%d/%d", &person->bday.month, &person->bday.day, &person->bday.year);
}

void addPersonalDataToDatabase(PERSON *person)
{
    add(&head, &tail, person);
}

void displayDatabase()
{
    LIST *temp = head;
    while(temp != NULL){
        displayPerson((PERSON *)temp->data);
        temp = temp->next;
    }

}

void displayPerson(PERSON *person)
{
    // TODO Implement the function
    // hmmmm seems familiar....
    printf("%s : age %d, height %.1f, birthday %d/%d/%d\n", person->name, person->age, person->height, person->bday.month, person->bday.day, person->bday.year);
    //Zach : age 22, height 5.8, birthday 2/20/1989
}

PERSON *findPersonInDatabase(char *name)
{
    LIST *currNode = head;
    while(currNode != NULL) {
        PERSON *person = (PERSON *) currNode->data;
        if(strcmp(person->name, name) == 0){
            return person;
        }
        currNode = currNode->next;
    }
    return NULL; // if not found
}

void removePersonFromDatabase(char *name)
{
    delete(&head, &tail, findPersonInDatabase(name));
}

void clearDatabase()
{
    clearRecursively(&head, &tail);
}
