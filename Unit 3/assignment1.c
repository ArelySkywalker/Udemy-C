/****************************
 *
 *  ASSIGNMENT1:Study the wedge function. Write four functions like 
 *              wedge that print wedges in the following
 *              configurations:
 *              
 *              #           #   #####   #####
 *              ##         ##   ####     ####
 *              ###       ###   ###       ###
 *              ####     ####   ##         ##
 *              #####   #####   #           #
 *
 ****************************/

#include <stdio.h>

//functions must be declared before they are called:

/*
 * FUNCTION DECLARATIONS or PROTOTYPES:
 */

void wedge1(char what, int lines);
void wedge2(char what, int lines);
void wedge3(char what, int lines);
void wedge4(char what, int lines);

int main(int argc, char* argv[]) {
    wedge1('#',5);
    wedge2('#',5);
    wedge3('#',5);
    wedge4('#',5);
}

/*
 * FUNCTION DEFINITIONS
 */

//prints a wedge of "what" characters, 
//the wedge will have "lines" lines of characters:

// WEDGE 1
void wedge1(char what, int lines) {
    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", what);
        }
        printf("\n");
    }
    printf("\n");
}

// WEDGE 2
void wedge2(char what, int lines) {
    for (int i = 1; i <= lines; i++) {
        int count = lines - i + 1;
        printf("% *c",count, " ");

        for (int j = 1; j <= i; j++) {
            printf("%c", what);
        }
        printf("\n");
    }
    printf("\n");
}

// WEDGE 3
void wedge3(char what, int lines) {
    for (int i = lines; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%c", what);
        }
        printf("\n");
    }
    printf("\n");
}

// WEDGE 4
void wedge4(char what, int lines) {
    for (int i = lines; i >= 1; i--) {
        int count = lines - i + 1;
        printf("% *c",count, " ");

        for (int j = i; j >= 1; j--) {
            printf("%c", what);
        }
        printf("\n");
    }
    printf("\n");
}
