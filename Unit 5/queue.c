/*
    queue.c
    queue operations
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char* data;
    struct node *pNext;
} node;

node *pHead = NULL;


//prototypes:
void enqueue(char* value);
char* dequeue();
void printQueue();
void clear();
void error(char* msg);

int main(int argc, char* argv[]) {
    //set up some tasks:
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            enqueue(argv[i]);
        }
    }
    
    char response[3];
    while(pHead != NULL) {
        printf("Have you done the task '%s' yet? ", pHead -> data);
        scanf("%s", response);
        if (strcmp("yes", response) == 0) dequeue();
    }
    printf("OK, you can have a cookie.\n");
}

void enqueue(char* value) {
    if (pHead == NULL) {
        //queue is empty:
        pHead = malloc(sizeof(node));
        pHead -> data = value;
        pHead -> pNext = NULL;
    } else {
        //add new node to end of queue:
        node *pNew = malloc(sizeof(node));
        //walk down the queue until the last node is reached:
        node *pTemp = pHead;
        while (pTemp -> pNext != NULL) {
            pTemp = pTemp -> pNext;
        }
        pTemp -> pNext = pNew;
        pNew -> data = value;
        pNew -> pNext = NULL;
    }
}

char* dequeue() {
    if (pHead == NULL) {
        error("dequeue error: queue empty");
        return "";
    } else {
        //get the value to return:
        char* retVal = pHead -> data;
        //new pointer to the head:
        node *pTemp = pHead;
        //point the head to the next node:
        pHead = pHead -> pNext;
        //free the memory pointed to by pTemp:
        free(pTemp);
        return retVal;
    }
}

void printQueue() {
    //get temporary pointer:
    node *pTemp = pHead;
    printf("\n========\n");
    if (pTemp == NULL) {
        error("Print error: queue empty");
        return;
    }
    //walk down the queue, printing each value:
    do {
        printf("%s\n", pTemp -> data);
        pTemp = pTemp -> pNext;
    } while (pTemp != NULL);
    printf("========\n");
}

void clear() {
    while (pHead != NULL) {
        dequeue();
    }
}
    
void error(char* msg) {
    printf("%s\n", msg);
}