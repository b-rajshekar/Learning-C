/* if (condition1) {
   block of code to be executed if condition1 is true

} else if (condition2) {
   block of code to be executed if the condition1 is false and condition2 is true

} else {
   block of code to be executed if the condition1 is false and condition2 is false
} */

#include <stdio.h>
int main() {
    int time = 22;
    if (time < 10) {
        printf("Good Morning.");
    } else if (time < 20) {
        printf("Good Day.");
    } else {
        printf("Good Evening");
    }
    return 0;
}

/*C Short Hand if else

Short Hand If..Else(Ternary Operator)
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

Syntax
variable = (condition) ? expressionTrue : expressionFalse; */

// Example

#include <stdio.h>
int main() {
    int time = 22;
    (time < 14) ? printf("Good Afternoon") : printf("Good Evening");
    return 0;
}