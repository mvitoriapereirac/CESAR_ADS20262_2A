#include <stdio.h>

int main() {
    double lado, base, altura;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado);
    printf("Area do quadrado: %.2f\n", lado * lado);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &base, &altura);
    printf("Area do retangulo: %.2f\n", base * altura);

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%lf %lf", &base, &altura);
    printf("Area do triangulo: %.2f\n", (base * altura) / 2.0);

    return 0;
}
