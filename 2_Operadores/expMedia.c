#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira notas: ");
    scanf("%f", &nota1);

    printf("Digite a segunda notas: ");
    scanf("%f", &nota2);

    printf("Digite a terceira notas: ");
    scanf("%f", &nota3);

    printf("Digite a quarta notas: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("A média das notas é: %.2f\n", media);

    system("PAUSE");
    return 0;
}