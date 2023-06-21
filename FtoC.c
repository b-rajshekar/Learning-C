#include <stdio.h>
int main() {
    int f,c;

    printf("Please Enter the Fahrenheit: ");
    scanf("%d", &f);
    c = (f -32)/1.8;
    printf("%d Fahrenheit is %d celsius \n",
    f,c);

    return 0;
}