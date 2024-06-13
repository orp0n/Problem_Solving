#include <stdio.h>

int main() {
    double x1, x2, y1, y2, distance, sq1, sq2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    sq1 = (x2 - x1) * (x2 - x1);
    sq2 = (y2 - y1) * (y2 - y1);
    distance = sqrt (sq1 + sq2);

    printf("%.4lf\n", distance);
    return 0;
}
