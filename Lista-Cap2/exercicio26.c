#include <stdio.h>

int main() {
    double comprimento, largura, preco_metro;
    double perimetro, metros_arame, custo;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno (m): ");
    scanf("%lf", &largura);

    printf("Digite o preco por metro de arame (R$): ");
    scanf("%lf", &preco_metro);

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = perimetro * 3.0;
    custo = metros_arame * preco_metro;

    printf("Metros de arame: %.2f m\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}
