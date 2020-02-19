/**
* Name: Sal Penza
* Lab: Lab 1
* Date: 2/16/20
**/

#include "processor.h"

MESSAGE messageCache[CACHE_SIZE];
int messagesRead = 0;
int batchesProcessed = 0;
int messageTypes[4];
int total;

void addMessageToCache(char *inputLine) {
    int size;
    int type = 0;
    sscanf(inputLine, "%d", &type);
    switch (type) {
        case MSG_TYPE_1:
            size = strlen(inputLine);
            messageCache[messagesRead].type = MSG_TYPE_1;
            messageCache[messagesRead].content.string = (char *) calloc(size, sizeof(char));
            sscanf(inputLine, "%d %[^\n]", &type, messageCache[messagesRead].content.string);
            messageTypes[type - 1]++;
            break;
        case MSG_TYPE_2:
            messageCache[messagesRead].type = MSG_TYPE_2;
            sscanf(inputLine, "%d %d %d %d %d",
                   &type,
                   &messageCache[messagesRead].content.integers[0],
                   &messageCache[messagesRead].content.integers[1],
                   &messageCache[messagesRead].content.integers[2],
                   &messageCache[messagesRead].content.integers[3]);
            messageTypes[type - 1]++;
            break;
        case MSG_TYPE_3:
            messageCache[messagesRead].type = MSG_TYPE_3;
            sscanf(inputLine, "%d %lf %lf %lf %lf %lf",
                   &type,
                   &messageCache[messagesRead].content.doubles[0],
                   &messageCache[messagesRead].content.doubles[1],
                   &messageCache[messagesRead].content.doubles[2],
                   &messageCache[messagesRead].content.doubles[3],
                   &messageCache[messagesRead].content.doubles[4]);
            messageTypes[type - 1]++;
            break;
        case MSG_TYPE_4:
            messageCache[messagesRead].type = MSG_TYPE_4;
            sscanf(inputLine, "%d %s %s %s %s %s",
                   &type,
                   &messageCache[messagesRead].content.words[0],
                   &messageCache[messagesRead].content.words[1],
                   &messageCache[messagesRead].content.words[2],
                   &messageCache[messagesRead].content.words[3],
                   &messageCache[messagesRead].content.words[4]);
            messageTypes[type - 1]++;
            break;

    }
    total++;
    messagesRead++;

    if (messagesRead >= CACHE_SIZE) {
        messageDispatcher();
    }
}

void messageDispatcher(void) {
    puts("\nRunning Message Dispatcher...");
    for (int i = 0; i < messagesRead; i++) {
        processMessage(&messageCache[i]);
    }
    batchesProcessed++;
    messagesRead = 0;
}

void processMessage(MESSAGE *message) {
    switch (message->type) {
        case MSG_TYPE_1:
            printf("TYPE 1 : %s", message->content.string);
            free(message->content.string);
            break;
        case MSG_TYPE_2:
            printf("TYPE 2 : %d %d %d %d",
                   message->content.integers[0],
                   message->content.integers[1],
                   message->content.integers[2],
                   message->content.integers[3]);

            break;
        case MSG_TYPE_3:
            printf("TYPE 3 : %.1lf %.1lf %.1lf %.1lf %.1lf",
                   message->content.doubles[0],
                   message->content.doubles[1],
                   message->content.doubles[2],
                   message->content.doubles[3],
                   message->content.doubles[4]);
            break;
        case MSG_TYPE_4:
            printf("TYPE 4 : %s %s %s %s %s",
                   message->content.words[0],
                   message->content.words[1],
                   message->content.words[2],
                   message->content.words[3],
                   message->content.words[4]);
            break;
    }
    printf("\n");
}

void printStatistics(void) {
    puts("\nDisplaying Statistics...");
    printf("Number of batches processed: %d", batchesProcessed);
    puts("\nMessages processed:");
    printf("\tTotal : %d\n", total);
    printf("\tType 1 : %d\n", messageTypes[0]);
    printf("\tType 2 : %d\n", messageTypes[1]);
    printf("\tType 3 : %d\n", messageTypes[2]);
    printf("\tType 4 : %d\n", messageTypes[3]);

}
