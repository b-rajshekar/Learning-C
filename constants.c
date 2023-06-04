/* Constants

If you don't want others (or yourself) to change existing variable values, you can use the const keyword.

This will declare the variable as "constant", which means unchangeable and read-only: */

/* Good Practice
Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers: */

#include <stdio.h>
int main() {
const int BIRTHYEAR = 1999;
BIRTHYEAR = 10; // This throws an error: assignment of read-only variable 'BIRTHYEAR'

printf("%d", BIRTHYEAR);
return 0;
}