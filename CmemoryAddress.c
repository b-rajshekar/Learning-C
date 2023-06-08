/* C Memory Address

--> When a variable is created in C, a memory address is assigned to the variable.

--> The memory address is the location of where the variable is stored on the computer.

--> When we assign a value to the variable, it is stored in this memory address.

--> To access it, use the reference operator (&), and the result represents where the variable is stored.

Example:*/

#include <stdio.h>
int main() {
    int myAge = 23;
    printf("%p", &myAge); // it outputs:00000000005ffe9c (if may get different output depending on other computers memory address)

    return 0;
}

/* WHY is it useful to know the memory address?

..> Pointers are important in C, Because they allow us to manipulate the data in the computer's memory.

..> This can reduce the code and improve the performance.

..> Pointers are one of the things that make C stand out from other programming languages, like Python and Java.
*/