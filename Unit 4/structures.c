/*
    structures.c
    shows use of struct
*/

#include <stdio.h>
#include <stdlib.h> // for malloc and free

int main(int argc, char* argv[]) {

    // using typedef to define an alias for char*
    typedef char* string;

    // define a new type called Book: a structure
    // containing a title, author, and number of pages:
    typedef struct {
        string title;
        string author;
        short pages;
    } Book;

    // create book1 on the stack:
    Book book1;
    book1.title = "The Big Book of C";
    book1.author = "John Doe";
    book1.pages = 458;

    // create a pointer to book2 on the heap:
    // memory allocate
    Book *book2 = malloc(sizeof(Book));
    book2 -> title = "Living with a Programmer";
    book2 -> author = "Jane Doe";
    book2 -> pages = 250;

    // print book1's information:
    printf("Title: %s\nAuthor: %s\nPages: %d\n\n", 
        book1.title, book1.author, book1.pages);
    
    // print book2's information:
    printf("Title: %s\nAuthor: %s\nPages: %d\n\n", 
        book2 -> title, book2 -> author, book2 -> pages);

    // free the heap memory assigned to book2:
    // failing to do this will result in a memory leak.
    free(book2);

}