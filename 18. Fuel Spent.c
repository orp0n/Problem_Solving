#include <stdio.h>

int main() {

    int x, y;
    double distance;
    scanf("%d %d", &x, &y);
    distance = x * y;
    printf("%.3lf\n", distance/ 12);

    return 0;
}
