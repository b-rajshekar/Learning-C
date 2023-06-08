/* C Pointers

Creating Pointers - We can get the memory address of a variable with the reference operator &:

Example

int myAge = 23; -- an int variable

printf("%d", myAge); --Outputs the value of myAge (23)
printf("%p", &myAge); --Outputs the memory address of myAge (0x...)

..> A pointer is a variable that stores the memory address of another variable as its value.

..> A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

..> The address of the variable you are working with is assigned to the pointer:

Example:*/

#include <stdio.h>
int main() {
    int myAge = 23; // An int variable
    int* ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge(23)
    printf("%d\n", myAge);

// Output the memory address of myAge (00000000005ffe94)
    printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (00000000005ffe94)
    printf("%p\n", ptr);

    return 0;
}

/*

Note that the * sign can be confusing here, as it does two different things in our code:

--> When used in declaration (int* ptr), it creates a pointer variable.

--> When not used in declaration, it act as a dereference operator.*/