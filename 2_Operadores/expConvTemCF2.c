#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float tempC;
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &tempC);

    printf("A temperatura em Fahrenheit é: %.2f°F\n", (tempC * 9/5) + 32);

    system("PAUSE");
    return 0;
}