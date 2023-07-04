#include <stdio.h>
int main() {
    int hin, tel, eng, mat, sci, soc, aggr;
    float per;
    printf("Please enter your subject marks by giving space: ");

    scanf("%d%d%d%d%d%d", &hin, &tel, &eng, &mat, &sci, &soc);
    aggr = hin + tel + eng + mat + sci + soc;
    per = aggr/6;

    printf("Your total Aggregate Marks = %d\n", aggr);
    printf("Your total Percentage = %.0f\n", per);

    return 0;
}