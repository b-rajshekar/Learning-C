/* C For Loop

When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop.

Syntax:
for (statement 1; statement 2; statement 3) {
    code block to be executed
}

statement 1 - is executed (one time) before the exection of the code block.
statement 2 - defines the condition for executing the code block.
statement 3 - it is executed (every time) after the code block has been executed. */

// Example:

#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 8; i++) {
        printf("%d", i);   
    }
    return 0;
}

/* Example explained 

Statement 1 - sets a variable before the loop starts (int i = 0).

Statement 2 - defines the condition for the loop to run (i must be less than 8). If the condition is true, the loop will start over again, if it is false, the loop will end.

Statement 3 - increases a value (i++) each time the code block in the loop has been executed.

Another example

for (i = 0; i <= 10; i = i + 2) {
    printf("%d\n", i);
} output - 0 2 4 6 8 10

*/


/* Nested Loops

It is also possible to place a loop inside another loop. This is called a nested loop.

The "inner loop" will be executed one time for each iteration of the "outer loop": */

// Example:

#include <stdio.h>
int main() {
    int i, j;
    //outer loop
for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i); // Executes 2 times

    //Inner Loop
for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j); // Executes 6 times (2 * 3)
}
}
return 0;
}