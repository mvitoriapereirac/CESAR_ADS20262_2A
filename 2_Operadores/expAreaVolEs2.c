#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("A área da esfera é: %.2f\n", 4 * M_PI * pow(raio, 2));
    printf("O volume da esfera é: %.2f\n", (4/3) * M_PI * pow(raio, 3));

    system("PAUSE");
    return 0;
}