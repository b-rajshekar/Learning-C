#include <stdio.h>
int main() {
/* There are two types of conversion in C:
--> Implicit Conversion (automatically)
--> Explicit Conversion (Manually) */

// Implicit Conversion
// Automatic conversion: int to float
float myFloat = 7;
printf("%.1f", myFloat);
return 0;
}

// Automatic conversion: float to int
int myInt = 9.99;
printf("%d", myInt); //9


// Explicit Conversion
// Explicit conversion is done manually by placing the type in parentheses () in front of the value.

// Manual conversion: int to float
float sum = (float) 5 / 2;

printf("%f", sum); // 2.500000

//or

int num1 = 5;
int num2 = 2;
float sum = (float) num1 / num2;

printf("%f", sum); // 2.500000

// Decimal precision - could make the output even cleaner by removing the extra zeros
// Example
int num1 = 5;
int num2 = 2;
float sum = (float) num1 / num2;

printf("%.1f", sum); //2.5