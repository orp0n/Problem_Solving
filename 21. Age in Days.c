#include <stdio.h>

int main() {

    int x, y, m, d, div;
    scanf("%d", &x);
    y = x / 365;
    div = x % 365;
    m = div / 30;
    div = div % 30;
    d = div / 1;
    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}
