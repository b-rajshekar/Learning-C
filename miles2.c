#include <stdio.h>
int main() {
    int miles, yards;
    double kilometers;

    printf("Enter miles space yards: ");
    scanf("%d%d", &miles, &yards);

    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nA marathon is %lf kilometers.\n", kilometers);

    return 0;
}