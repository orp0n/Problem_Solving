#include <stdio.h>

int main() {
    int serial, wpm;
    double dollar, muli;
    scanf("%d %d %lf", &serial, &wpm, &dollar);

    muli = wpm * dollar;

    printf("NUMBER = %d\n", serial);
    printf("SALARY = U$ %.2lf\n", muli);
    return 0;
}
