/**
 * Name: Sal Penza
 * Lab: Lab 3
 * Date: 2/19/2020
**/
#include "list.h"

void add(LIST **head, LIST **tail, void *data)
{
    if(*tail == NULL){
        *head = *tail = (LIST *) malloc(sizeof(LIST));
        (*head)->data = data;
        (*head)->next = NULL;
    }else{
        (*tail)->next = (LIST *) malloc(sizeof(LIST));
        *tail = (*tail)->next;
        (*tail)->data = data;
        (*tail)->next = NULL;
    }
}

void clearIteratively(LIST **head, LIST **tail)
{
    if (*head == NULL)
        return;

    LIST *currNode = *head;
    LIST *nextNode = NULL;
    do
    {
        nextNode = currNode->next;

        if (currNode->data != NULL)
            free(currNode->data);

        free(currNode);

        currNode = nextNode;

    } while (currNode != NULL);

    *head = NULL;
    *tail = NULL;
}

void clearRecursively(LIST **currNode, LIST **tail)
{
    if(*currNode == NULL){
        return;
    }
    LIST *nextNode = (*currNode)->next;
    free((*currNode));
    clearRecursively(&nextNode, tail);
    *currNode = NULL;
    *tail = NULL;
}

void delete(LIST **head, LIST **tail, void *data)
{
    LIST *currNode;
    LIST *prevNode;
    if(*head == NULL || data == NULL){
        return;
    }
    if((*head)->data == data){
        LIST *temp = (*head)->next;
        free((*head)->data);
        free(*head);
        *head = temp;
        if(*head == NULL){
            *tail = NULL;
        }
        return;
    }
    prevNode = (*head);
    currNode = (*head)->next;
    while(currNode != NULL){
        if(currNode->data == data){
            prevNode->next = currNode->next;
            free(currNode->data);
            free(currNode);
            return;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }
}