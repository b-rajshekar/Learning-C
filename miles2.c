#include <stdio.h>
int main() {
    int miles, yards;
    double kilometers;

    printf("Enter miles space yards: ");
    scanf("%d%d", &miles, &yards); // takes input from the user and stores in miles and yards;

    kilometers = 1.609 * (miles + yards/1760.0); // it is a mathematical calculation in C that converts a distance given in miles and yards into kilometers
    printf("\nA marathon is %lf kilometers.\n", kilometers);

    return 0;
}
