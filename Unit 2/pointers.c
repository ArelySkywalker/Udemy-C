/*
    Pointers
*/
#include <stdio.h>

int main(int argc, char* argv[]) {
    // declare an int a
    int a;
    // declare a pointer to a. "assign pA the address of a"
    int *pA;
    pA = &a;

    // print the sizeof a and pA
    printf("sizeof a = %lu, size of pA = %lu\n", sizeof a, sizeof pA);

    a = 9;
    // print a, pA, and the contents of memory at address pA:
    printf("a = %d, pA = %p, *pA = %d\n", a, pA, *pA);

    *pA = 4;
    // print again:
    printf("a = %d, pA = %p, *pA = %d\n", a, pA, *pA);

    /*
        RECAP:
        a is an int
        pA is the address of the contents to a
        *pA is the pointer to the contents of a
    */

   int *pA2 = &a;
    //    print the contents of pA and pA2:
    printf("*pA = %d, *pA2 = %d\n", *pA, *pA2);

    // bump *pA:
    *pA += 1;
    // print the contents of both pointers and a"
    printf("*pA = %d, *pA2 = %d, a = %d\n", *pA, *pA2, a);

    // char* argv[] is an array of char pointers, or strings.
    int argcount = 0;
    while(argcount < argc) {
        printf("argv[%d] = %s\n", argcount, argv[argcount]);
        argcount++;
    }
}