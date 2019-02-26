/*
    numbers.c
    prompts the user for two integers, adds them, prints result.
*/

#include <stdio.h>

int getIntWithPrompt(char * prompt);
int sum(int a, int b);
int product(int a, int b);
int max(int a, int b);

int main(int argc, char* argv[]) {

    // get two integers from the user:
    int a = getIntWithPrompt("Enter first integer: ");
    int b = getIntWithPrompt("Enter second integer: ");

    // print the sum:
    printf("%d + %d = %d\n", a, b, sum(a, b));

    // print the product: 
    printf("%d * %d = %d\n", a, b, product(a, b));

    // get the max"
    printf("the greatest of %d and %d is %d\n", a, b, max(a, b));
}

// returns an integer after prompting with a string:
int getIntWithPrompt(char* prompt){
    int input;
    printf("%s ", prompt);
    scanf("%d", &input);
    return input;
}

// adds two ints, returns the result:
int sum(int a, int b) {
    return a + b;
}

// multiplies two ints, returns the result:
int product(int a, int b) {
    return a * b;
}

// grabs the max of two ints, returns the result:
int max(int a, int b) {
    if(a > b ){
        return a;
    }else {
        return b;
    }
    
}