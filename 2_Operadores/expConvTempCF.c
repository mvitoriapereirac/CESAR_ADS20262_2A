#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float tempC, tempF;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempC);

    tempF = (tempC * 9/5) + 32;

    printf("A temperatura em Fahrenheit é: %.2f°F\n", tempF);

    system("PAUSE");
    return 0;
}