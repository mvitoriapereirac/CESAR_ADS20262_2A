#include <stdio.h>

int main() {
    int dias;
    double bruto, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.0;
    imposto = bruto * 0.08;
    liquido = bruto - imposto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
