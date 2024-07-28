#include <stdio.h>

int main() {

    int x, div1, div2, div3, div4, div5, div6, div7, mod;
    scanf("%d", &x);
    printf("%d\n", x);
    div1 = x / 100;
    printf("%d nota(s) de R$ 100,00\n", div1);
    mod = x % 100;

    div2 = mod / 50;
    printf("%d nota(s) de R$ 50,00\n", div2);
    mod = mod % 50;

    div3 = mod / 20;
    printf("%d nota(s) de R$ 20,00\n", div3);
    mod = mod % 20;

    div4 = mod / 10;
    printf("%d nota(s) de R$ 10,00\n", div4);
    mod = mod % 10;

    div5 = mod / 5;
    printf("%d nota(s) de R$ 5,00\n", div5);
    mod = mod % 5;

    div6 = mod / 2;
    printf("%d nota(s) de R$ 2,00\n", div6);
    mod = mod % 2;

    div7 = mod / 1;
    printf("%d nota(s) de R$ 1,00\n", div7);

    return 0;
}
