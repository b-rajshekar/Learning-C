/* User Input

printf() is used to output values in C.
To get user input, use scanf() function.

Example:
Output a number entered by the user: */

#include <stdio.h>
int main() {
    int userAge;

    printf("Buenos Dias, What is your age: \n");

    scanf("%d", &userAge);

    printf("Your age is: %d", userAge);
    return 0;
}

// Taking String input
// Example: Output the name of a user:

#include <stdio.h>
int main() {
    char myName[10];
    printf("Enter your name: \n");

    scanf("%s", myName);
    printf("Hola %s", myName);

    return 0;
}

/* From the example above, you would expect the program to print your full name but it only prints first name.

That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: The name of the string variablel, sizeof(string_name), and stdin: */

// Example:

#include <stdio.h>
int main() {
    char fullName[30];
    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hola %s", fullName);

    return 0;
}

