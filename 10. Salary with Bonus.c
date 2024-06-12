#include <stdio.h>

int main() {
    char name[10];
    double s, b, sum;
    gets(name);
    scanf("%lf %lf", &s, &b);

    sum = (s + ((double)15/(double)100 * b));

    printf("TOTAL = R$ %.2lf\n", sum);
    return 0;
}
