#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int lapis = 45, borrachas = 2345, canetas = 420;
    int cardernos = 8, fitas = 13050;

    printf("\nLapis: %12d", lapis);
    printf("\nBorrachas: %12d", borrachas);
    printf("\nCanetas: %12d", canetas);
    printf("\nCadernos: %12d", cardernos);
    printf("\nFitas: %12d\n\n", fitas);
    
    system("PAUSE");
    return 0;
}