/* C Function Declaration and Definition

Function Declaration and Definition

Example: */

Create a function
#include <stdio.h>
void myFunction() {
    printf("I just got executed!");
}

int main() {
    myFunction(); // call the function
    return 0;
} Output: I just got executed!

/* A function consist of two parts:

..> Declaration: the function's name, return type, and parameters (if any)

..> Definition: the body of the function (code to be executed)

For code optimization, it is recommended to separate the declaration and the definition of the function.

You will often see C programs that have function declaration above main(), and function definition below main().

This will make the code better organized and easier to read:

Example:*/

// Function declaration
#include <stdio.h>
void myFunction();

// The main method
int main() {
    myFunction(); // call the function
    return 0;
}

// Function definition
void myFunction() {
    printf("I just got executed! man!!!");
} Output: I just got executed! man!!!

// Another Example:

#include <stdio.h>
int myFunction(int x, int y) {
    return x * y;
}

int main() {
    int result = myFunction(7, 1);
    printf("Result is = %d", result);
    return 0;
}