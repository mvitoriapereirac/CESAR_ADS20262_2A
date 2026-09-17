#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a = 10, b = 20;
    /* 1. Multiplicação/Divisão executam primeiro */
    int r1 = a + (b / 2);
    /* 2. Parêntesis forçam a prioridade */
    int r2 = (a * 2) + 1;
    /* 3. Expressões complexas */
    int r3 = (((((a*2) + 1)*2)+1)*2+1);

    printf("Resultado 1: %d\n", r1);
    printf("Resultado 2: %d\n", r2);
    printf("Resultado 3: %d\n", r3);

    system("PAUSE");
    return 0;
}