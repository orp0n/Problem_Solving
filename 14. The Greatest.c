#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, X;
    scanf("%d %d %d", &a, &b, &c);

    X = (a + b + abs(a - b))/ 2;
    X = (X + c + abs(X - c))/ 2;

    printf("%d eh o maior\n", X);
    return 0;
}

