/*
    Arrays
*/
#include <stdio.h>

int main(int argc, char* argv[]) {
    // an array of ints
    int grades[5];
    int count = 0;
    int total = 0;

    // assign values to grades. Arrays are zero-based:
    grades[0] = 57;
    grades[1] = 93;
    grades[2] = 83;
    grades[3] = 78;
    grades[4] = 100;

    // print out the grades, introducing the while loop:
    while (count < 5){
        printf("grades[%d] = %d\n", count, grades[count]);
        total += grades[count++];
    }

    // print out the average
    printf("\nTotal: %d\n", total);
    printf("Average grade: %.2f\n\n", total /5.0);


    // an array of chars:
    char hello[] = { 'H', 'e', 'l', 'l', 'o' };
    count = 0;
    while (count < 5){
        printf("%c", hello[count]);
        count++;
    }
    printf("\n");

    // the same array as a "string" (does this work?)
    char hello2[5] = "Hello";
    printf("%s\n", hello2);

    // this is correct... we have to null terminate the string:
    char hello3[6] = "Hello\0";    // \0 is the null char...
    printf("%s\n", hello3);

    // wherever we put the null, the string will end:
    char hello4[6] = "He\0llo";
    printf("%s\n", hello4);

    // another way to decalre an array of characters,
    // terminated by a null (the right way to declare a string):
    char* hello5 = "Hello";
    printf("%s\n", hello5);
    printf("%c", hello5[0]);

}