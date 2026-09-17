#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float tempF;
    
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tempF);

    printf("A temperatura em Celsius é: %.2f°C\n", (tempF - 32) * 5/9);

    system("PAUSE");
    return 0;
}