#include <stdio.h>

int main() {

    double x;
    int n100, n50, n20, n10, n5, n2, p1, p50, p25, p10, p05, p01, mod;
    scanf("%lf", &x);
    x = x * 100;
    int intagerX;
    intagerX = x;
    printf("NOTAS:\n");

    n100 = intagerX / (100 * 100);
    mod = intagerX % (100 * 100);
    printf("%d nota(s) de R$ 100.00\n", n100);


    n50 = mod / (50 * 100);
    mod = mod % (50 * 100);
    printf("%d nota(s) de R$ 50.00\n", n50);

    n20 = mod / (20 * 100);
    mod = mod % (20 * 100);
    printf("%d nota(s) de R$ 20.00\n", n20);

    n10 = mod / (10 * 100);
    mod = mod % (10 * 100);
    printf("%d nota(s) de R$ 10.00\n", n10);

    n5 = mod / (5 * 100);
    mod = mod % (5 * 100);
    printf("%d nota(s) de R$ 5.00\n", n5);

    n2 = mod / (2 * 100);
    mod = mod % (2 * 100);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");

    p1 = mod / (1 * 100);
    mod = mod % (1 * 100);
    printf("%d moeda(s) de R$ 1.00\n", p1);

    p50 = mod / 50;
    mod = mod % 50;
    printf("%d moeda(s) de R$ 0.50\n", p50);

    p25 = mod / 25;
    mod = mod % 25;
    printf("%d moeda(s) de R$ 0.25\n", p25);

    p10 = mod / 10;
    mod = mod % 10;
    printf("%d moeda(s) de R$ 0.10\n", p10);

    p05 = mod / 5;
    mod = mod % 5;
    printf("%d moeda(s) de R$ 0.05\n", p05);

    p01 = mod / 1;
    mod = mod % 1;
    printf("%d moeda(s) de R$ 0.01\n", p01);

    return 0;
}

