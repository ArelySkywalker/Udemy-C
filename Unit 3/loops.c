/*
    while, do, and for loops
*/
#include <stdio.h>

int main(int argc, char* argv[]) {

    int count = 0;

    // a while loop - the condition is checked
    // at the top of the loop. loops 0 or more times.
    printf("\nwhile loop\n");

    while (count < 10){
        printf("%d ", count++);
    }

    printf("\n\n");

    // a do loop - the condition is checked at
    // the bottom of the loop. loops 1 or more times.
    printf("do loop\n");

    do {
        printf("%d ", count++);
    } while (count < 10);

    printf("\n\n");

    /*
        If you want the body of the loop to never execute
        unless the condition is true, use a while loop.
        The body of a do loop will always execute at least once.
    */

    /*
        a for loop. For loops have three parts in parenthesis:
            an initialization: set thec counter and other values
            a condition: what must be true in order for the loop
                to continue executing
            an increment: how to change the value of the counter
                each time through the loop
    */

    printf("for loop\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", i);
    }

    printf("\n\n");


    // Let's do Pamyk's problem we had the other day.
    // First loop and print until countDown = 0;

    
    printf("Pamyk's Problem\n");
    for(int countDown = 10; countDown >= 0; countDown--){
        printf("%d ", countDown);
    }

    // Now only print it whenever countDown is 0

    int countDown = 10;
    int i;
    
    for(i = countDown; countDown >= 0; countDown--){
        i = countDown;
    }

    countDown = i;

    printf("\n");
    printf("Pamyk's Problem Solved\n");
    printf("%d ", countDown);

}