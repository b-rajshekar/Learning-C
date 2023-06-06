/* C Switch

Switch Statement - Instead of writing many if..else statements, you can use the switch statement.

The switch statement selects one of many code blocks to be executed.

Syntax:

switch (expression) {
    case x:
     //code block
     break;
    case y:
    //code block
     break;
    default:
    //code block
}

This is how it works:
..> The switch expression is evaluated once.
..> The value of the expression is compared with the values of each case.
..> If there is a match, the associated block of code is executed.
..> The break statement breaks out of the switch block and stops the execution.
..> The default statement is optional, and specifies some code to run if there is no case match.
*/

// Example:

#include <stdio.h>
int main() {
    int day = 7;    
    switch (day) {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thusday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
    } 
    return 0;
}

// Output "Sunday" (day 7)



/* The break keyword
When C reaches a break keyword, it breaks out the switch block.

This will stop the execution of more code and case testing inside the block.

When a match is found, and the job is done, it's time for a break. There is no need for more testing.

The default keyword - default keyword specifies some code to run if there is no case match.
*/

// Example:
#include <stdio.h>
int main() {
    int day = 4;
    switch (day) {
        case 6:
        printf("Today is Tuesday");
        break;
        case 7:
        printf("Today is Wednesday");
        break;
        default:
        printf("Looking forward to the weekend");
        break;
    }
    return 0;
}

//Outpur - "Looking forward to the weekend"