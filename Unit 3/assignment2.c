/****************************
 *
 * ASSIGNMENT2:The following code snippet swaps the values of
 *             two integers:
 *
 *             int a = 1, b = 2
 *             int temp;
 *             temp = a;
 *             a = b;
 *             b = temp;
 *
 *             Try to write a function that takes two integers
 *             a and b and swaps their values. Were you successful? 
 *             What do you think might be going on here? Can you 
 *             think of a way to make such a function work?
 * 
 ***************************/

#include <stdio.h>

//functions must be declared before they are called:

/*
 * FUNCTION DECLARATIONS or PROTOTYPES:
 */

void swapValues(int a, int b);


int main(int argc, char* argv[]) {
    swapValues(2,7);

}

void swapValues(int a, int b){

    // // contents of a
    int *pA;
    // // contents of b
    int *pA2;

    // // path to a
    pA = &a;
    // // path to b
    pA2 = &b;

    printf("a = %d, and b = %d\n\n", *pA, *pA2);
    printf("a path: %d, b path: %d\n\n", pA, pA2);
    printf("Now let's swap!\n\n");

    int temp;

    // set a to a temp value
    temp = *pA;
    *pA = *pA2;
    *pA2 = temp;

    printf("a = %d, and b = %d\n\n", *pA, *pA2);
    printf("a path: %d, b path: %d\n\n", pA, pA2);
}