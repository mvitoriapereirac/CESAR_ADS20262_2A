#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    printf("Este é o número %d.\n\tExemplo de uso de uma \"variável\".\a\n\n", 5);
    system("PAUSE");
    return 0;
}