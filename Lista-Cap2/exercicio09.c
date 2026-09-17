#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    if (b != 0) {
        printf("Divisao: %.2f\n", (double)a / b);
    } else {
        printf("Divisao: impossivel, pois o divisor e zero.\n");
    }

    /*
       Para evitar divisao por zero, deve-se verificar
       se o divisor e diferente de zero antes da divisao.
    */

    return 0;
}
