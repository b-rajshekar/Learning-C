/* C Break and Continue

Break
Already seen the break statement used to jump out of a switch statement

The break statement can also be used to jump out of a loop.
*/

// Example:

#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i == 8)
        {
            break;
        }
        printf("%d", i); 
    }
    return 0;
}

/* Continue

The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

In this example skips the value of 8:
*/

#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 11; i++) {
        if (i == 8) {
            continue;
        }
        printf("%d", i);
    }
    return 0;
}