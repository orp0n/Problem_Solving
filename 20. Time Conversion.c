#include <stdio.h>

int main() {

    int N, h, m, s, div;
    scanf("%d", &N);
    h = N / 3600;
    div = N % 3600;
    m = div / 60;
    div = div % 60;
    s = div / 1;
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
