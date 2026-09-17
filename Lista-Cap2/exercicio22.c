#include <stdio.h>

int main() {
    char maiuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &maiuscula);

    printf("Letra minuscula: %c\n", maiuscula + 32);

    return 0;
}
