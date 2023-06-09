/* C Functions

A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

Create a function (often referred to as declare) your own function, specify the name of the function, followed by parentheses() and curly brackets {}:

Syntax:

void myFunction() {
    code to be executed

}*/

// Example:

#include <stdio.h>
void myFunction() {
    printf("I just got executed!");
}

int main() {
    myFunction();
    return 0;
}