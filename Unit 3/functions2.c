/*
    Functions: pass by value vs. pass by reference
*/

#include <stdio.h>

void swapV(int a, int b);
void swapR(int *a, int *b);

int main(int argc, char* argv[]) {
    
    // attempt to swap two integers by passingtheir values:
    int num1 = 1;
    int num2 = 2;

    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Calling swapV\n");
    swapV(num1, num2);
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    // try to swap the same two values by passing pointers to 
    // their values isntead:
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Calling swapR\n");
    swapR(num1, num2);
    printf("num1 = %d, num2 = %d", num1, num2);

}


// swap the values of two integers passed by value:
void swapV(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// swap the values of two integers passed by
// reference (their pointers):
void swapR(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

