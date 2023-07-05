#include <stdio.h>
int main() {
    int commerce, economics, civics, sanskrit, english, aggr;
    float per;

    printf("Please Enter your marks: ");
    scanf("%d%d%d%d%d", &commerce, &economics, &civics, &sanskrit, &english);

    aggr = commerce + economics + civics + sanskrit + english;
    per = aggr/5;

    if (aggr >= 350) {
        printf("Your total Aggregate Marks:) %d\n", aggr);
    } else {
        printf("Your total Aggregate Marks:( %d\n", aggr);
    }

    if (per >= 70) {
        printf("Your total Percentage:) %.0f", per);
    } else {
        printf("Your total Percentage:( %.0f", per);
    }

    return 0;
}
