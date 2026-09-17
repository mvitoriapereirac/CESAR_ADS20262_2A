#include <stdio.h>

int main() {
    double kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", ms);

    return 0;
}
