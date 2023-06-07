/* C Arrays

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To create an array, define the data type like int and specify the name of the array followed by square brackets [].

To insert values to it, use a comma-separated list, inside curly braces:

int myNumbers[] = {7, 6, 27, 16};

We have now created a variable that holds an array of four integers.

Access the elements of an array

--> To access any array element, refer to its index number.
--> Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
--> This statement accesses the value of the first element [0] in myNumbers.
*/

// Example:

#include <stdio.h>
int main() {
    int myNumbers[] = {6, 7, 27, 16};
    printf("%d", myNumbers[1]);
    return 0;
}

/* To change the value of a specific element, refer to the index number.

Example:
myNumber[0] = 33;

Now outputs 33 instead of 6*/

#include <stdio.h>
int main() {
    int myNumbers[] = {5, 10, 15, 20, 25, 30, 35};
    int i;
    for (i = 0; i < 7; i++) {
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}

/* Set Array Size
Another common way to create arrays, is to specify the size of the array, and add elements later.

Example 
// Declaring any array of four integers:
int myNumbers[4];

//Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;

Using the method, you should know the size of the array, in order for the program to store enough memory.

You are not able to change the size of the array after creation.*/

