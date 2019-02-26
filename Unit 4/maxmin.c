/*
    maxmin.c
    Find the max and min value in an array
    using pointer arithmetic

    Not something you would normally do with arrays,
    but the point is to increase understanding
    that pointers are just variables containing
    an address.
*/

#include <stdio.h>
#include <limits.h> // for maximum and minimum int values

int max(int *array, int count);
int min(int *array, int count);
void walkWithChars(int *array, int chars);

int main(int argc, char* argv[]) {
    int numbers[] = {3, -4, 79, 0, 5, 8, 42, 109, 85};

    // first, show equivalency of [ ] and pointer notation:
    printf("numbers[0]: %d, *numbers: %d\n", numbers[0], *numbers);
    printf("numbers[4]: %d, *(numbers + 4): %d\n", numbers[4], *(numbers + 4));

    // print out the max and min of the array:
    printf("The max is %d\n", max(numbers, 9));
    printf("The min is %d\n", min(numbers, 9));

    walkWithChars(numbers, 9);
}

int max(int *array, int count) {
    // the name of an array is a pointer to the first element
    // of an array. pNumber will be used to walk the array.
    int *pNumber = array;
    // the minumum 4-byte int value:
    int max = INT_MIN;

    // loop through the array
    for(int i = 0; i < count; i++) {
        int n = *pNumber;
        if(n >= max) max = n;
        // point pNumber to the next element in the array.
        // adding 1 to a pointer increases the pointer's
        // value by the sizeof type it points to, i.e., 
        // this increases pNumber by 4 not 1.
        pNumber += 1;
    }
    return max;
}

// works int he same way as max.
int min(int *array, int count) {
    int *pNumber = array;
    // the maximum 4-byte int:
    int min = INT_MAX;
    for(int i = 0; i < count; i++) {
        int n = *pNumber;
        if(n <= min) min = n;
        pNumber += 1;
    }
    return min;
}

// what happens if the types of pNumner and array are mismatched?
void walkWithChars(int *array, int count) {
    char *pNumber = array;
    for(int i = 0; i < count; i++) {
        printf("'char' at pNumber: %d\n", *(pNumber + i));
        pNumber += 1;
    }
}