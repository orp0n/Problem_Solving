#include <stdio.h>

int main() {

    double A, B, C, squ, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);

    squ = (B * B) - 4 * A * C;

    if (squ > 0 && A != 0){
        squ = sqrt(squ);

        R1 = (- B + squ) / (2 * A);
        R2 = (- B - squ) / (2 * A);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
