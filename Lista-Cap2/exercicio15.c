#include <stdio.h>

int main() {
    double n1, n2, n3, n4;
    double media_simples, media_ponderada;

    printf("Digite as quatro notas: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media_simples = (n1 + n2 + n3 + n4) / 4.0;
    media_ponderada = (n1 + n2 + 2.0 * n3 + 2.0 * n4) / 6.0;

    printf("Media simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}
