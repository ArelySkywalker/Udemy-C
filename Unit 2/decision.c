/*
    Decision constructs and boolean operators demo
*/
#include <stdio.h>

int main(int argc, char* argv[]) {
    
    //define true and false:
    int false = 0;
    int true = !false;
    
    // print some boolean data using the ternary operator:
    printf("1 > 0 = %s\n", 1 > 0 ? "true" : "false");
    printf("1 < 0 = %s\n", 1 < 0 ? "true" : "false");
    printf("1 >= 0 = %s\n", 1 >= 0 ? "true" : "false");
    printf("1 <= 0 = %s\n", 1 <= 0 ? "true" : "false");
    printf("1 != 0 = %s\n\n", 1 != 0 ? "true" : "false");
    
    
    char boolValue = true;
    printf("%d == true ? %s\n", boolValue,
           boolValue == true ? "true" : "false");
    printf("%d != true ? %s\n", boolValue, 
           boolValue != true ? "true" : "false");
    printf("%d == false ? %s\n", boolValue, 
           boolValue == false ? "true" : "false");
    printf("%d != false ? %s\n\n", boolValue, 
           boolValue != false ? "true" : "false");
    
    
    char x = true, y = false;
    printf("x is true, y is false\n");
    printf("x && y : %s\n", x && y ? "true" : "false");
    printf("x || y : %s\n", x || y ? "true" : "false");
    printf("!x : %s\n", !x ? "true" : "false");
    printf("!y : %s\n\n", !y ? "true" : "false");
    
    printf("false = true evaluates to %s\n", 
           (false = true) ? "true" : "false");
    
    //we just overwrote the value of false, so set it back:
    false = 0;
    printf("false == true evaluates to %s\n\n", 
           false == true ? "true" : "false");
    
    //if
    int a = 5;
    if (a > 4) {
        printf("a is %d\n", a);
        a++;
    }
    printf("a is now %d\n", a);
   
    //if..else
    if (a > 4) {
        printf("a is %d\n", a);
        a++;
    } else {
        a--;
    }
    printf("a is now %d\n", a);
    
    //if..else if..else
    a = 0;
    if (a > 0) printf("a > 0\n");
    else if (a < 0) printf("a < 0\n");
    else printf("a == 0\n");
     
    //switch
    int argcount;
    //argc is the number of command line arguments to the program.
    switch (argc) {
        case 0:
            argcount = 0;
            break;
        case 1:
            argcount = 1;
            printf("There is %d command line argument.\n",
                   argcount);
            break;
        default:
            argcount = argc;
            printf("There are %d command line arguments.\n",
                   argcount);
    }
    
    
    
}