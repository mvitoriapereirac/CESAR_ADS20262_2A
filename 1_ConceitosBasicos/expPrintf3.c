#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("Este é o número %d.\n\tExemplo de uso de uma \"variável\".\a\n\n", 5);
    system("PAUSE");
    return 0;
}