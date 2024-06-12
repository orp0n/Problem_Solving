#include <stdio.h>

int main() {
    int cop1, uop1, cop2, uop2;
    double pop1, pop2, total;
    scanf("%d %d %lf %d %d %lf", &cop1, &uop1, &pop1, &cop2, &uop2, &pop2);

    total = (uop1 * pop1) + (uop2 * pop2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
