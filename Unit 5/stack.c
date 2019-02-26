/*
    stack.c
*/

#include <stdio.h>
#include <stdlib.h> // malloc and free
#include <limits.h> // for INT_MIN

// a stack node:
typedef struct node {
    int data;
    struct node *pNext;
} node;

// pointer to top of stack;
node *pTop = NULL;

// function prototypes;
void push(int value);
int pop();
void add();
void sub();
void mul();
void divide();
void swap();
void reverse();
void clear();
void error(char* msg);
void printStack();

int main(int argc, char* argv[]) {
    push(1);
    push(2);
    push(3);
    printStack();
    clear();
}

void push(int value) {
    if(pTop == NULL) {
        // stack empty, just set pTop to a new node:
        pTop = malloc(sizeof(node));
        pTop -> data = value;
        pTop -> pNext = NULL;
    }else {
        // make new node:
        node *pNew = malloc(sizeof(node));
        pNew -> data = value;
        // assign this node's next pointer to the top node:
        pNew -> pNext = pTop;
        // this node is the new top of stack:
        pTop = pNew;
    }
}

int pop() {

    // is the stack empty?
    if(pTop == NULL) {
        error("Pop error: stack empty");
        return INT_MIN;
    } else {
        int retVal = pTop -> data;
        // temp pointer to top
        node *pTemp = pTop;
        // set pTop to next node:
        pTop = pTop -> pNext;
        // free temp node:
        free(pTemp);
        return retVal;
    }
}

void add() {
    int a = pTop -> data;
    pop();
    int b = pTop -> data;
    pop();
    push(a + b);
}

void sub() {
    int a = pTop -> data;
    pop();
    int b = pTop -> data;
    pop();
    push(b - a);
}

void mul() {
    int a = pTop -> data;
    pop();
    int b = pTop -> data;
    push(a * b);
}

void divide() {
    int a = pTop -> data;
    pop();
    int b = pTop -> data;
    push(b % a); // the remainder
    push(b / a); // the quotient
}

void swap() {
    int temp = pTop -> data;
    pTop -> data = pTop -> pNext -> data;
    pTop -> pNext -> data = temp;
}

void reverse() {
    int temp = pTop -> data;
    
}

void clear() {
    while(pTop != NULL){
        pop();
    }
}

void printStack() {
    // get temporary pointer
    node *pTemp = pTop;
    if(pTemp == NULL) {
        error("Print error: stack empty");
        return;
    }
    // walk down the stack, printing each value
    do {
        printf("%d ", pTemp -> data);
        pTemp = pTemp -> pNext;
    } while (pTemp != NULL);
    printf("\n");
}

void error(char* msg) {
    printf("%s\n", msg);
}
