#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, c;
    /* Lê três valores decimais */
    scanf("%d %d %d", &a, &b, &c);
    /* Imprime os valores lidos */
    printf("a:%d b:%d c:%d\n", a, b, c);

    system("PAUSE");
    return 0;
}