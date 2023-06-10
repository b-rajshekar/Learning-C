/* C Function Parameters

Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:

Syntax:

returnType functionName (parameter1, parameter2, parameter3) {
    code to be executed
}

Example: 
*/

#include <stdio.h>
    void myFunction(char name[]) {
        printf("Hello %s\n", name);
    }
    int main() {
        myFunction("Rohit");
        myFunction("Gill");
        myFunction("Rahane");
        return 0;
    }
    