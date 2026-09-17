#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int valor_int = 5.9;
    float valor_float = 8;

    printf("Valor int: %d\n", valor_int);
    printf("Valor float: %.2f\n", valor_float);

    system("PAUSE");
    return 0;
}