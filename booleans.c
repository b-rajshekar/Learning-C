/*Very often, in programming, you will need a data type that can only have one of two values, like:
..> Yes/NO
..> On/Off
..> True/False

For this, C has a bool data type, which is known as booleans.
Booleans represent values that are either true of false.

Boolean Variables
In C, the bool type is not a built-in data type, like int or char.

It was introduced in C99, and you must import the following header file to use it which is:
#include <stdbool.h>

A boolean variable is declared with the bool keyword and can only take the values true or false:
*/

#include <stdio.h>
#include <stdbool.h>
int main() {
    // boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // returns boolean values
    printf("%d\n", isProgrammingFun);
    printf("%d", isFishTasty);
    return 0;
}


// Examples
printf("%d", 10>9); // Returns 1 (true) because 10 is greater than 9

// Example 2
int myAge = 25;
int votingAge = 18;

printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!

// Example 3
int myAge = 25;
int votingAge = 18;

if(myAge >=votingAge) {
    printf("Old enough to vote");
    } else {
    print("Not enough age to vote");
}
return 0;
}
