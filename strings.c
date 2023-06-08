/* Strings

Strings are used for storing text/characters.

For Example, "Hello World" is a string of charaters.

Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the char type and create an array of characters to make a string in C.

To output the string, you can use the printf() function together with the format specifier %s to tell C that we are now working with strings.
*/

// Example:

#include <stdio.h>
int main() {
    char greetings[] = "Good Morning";
    printf("%s", greetings);
    return 0;
}

/*

--> To access strings use index number inside square brackets[],
Example:

char greetings[] = "Hello World!";
printf("%c", greetings[0]);
outputs: H

--> Modify Strings - To change the value of a specific character in a string, refer to the index number, and use single quotes.

Example:

char greetings[] = "Hello World!";
greetings[0] = "J";
printf("%s", greetings);
Outputs: Jello World! instead of Hello World!

*/