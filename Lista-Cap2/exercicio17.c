#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double raio;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    printf("Area: %.2f\n", PI * raio * raio);
    printf("Circunferencia: %.2f\n", 2.0 * PI * raio);

    return 0;
}
