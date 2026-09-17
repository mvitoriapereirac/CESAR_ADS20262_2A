#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    /*
       O valor inteiro representa o codigo ASCII
       associado ao caractere informado.
    */
    printf("Codigo ASCII: %d\n", caractere);

    return 0;
}
