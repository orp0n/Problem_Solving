#include <stdio.h>

int main() {
    int R;
    double sphere, pi = 3.14159;
    scanf("%d", &R);

    sphere = (4.0/3) * pi * R * R * R;

    printf("VOLUME = %.3lf\n", sphere);
    return 0;
}
