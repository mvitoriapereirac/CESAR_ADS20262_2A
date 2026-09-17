#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lapis = 4.875, borrachas = 234.542, canetas = 42.036;
    float cardernos = 8.0, fitas = 13.05;

    printf("\nLapis: %12.2f", lapis);
    printf("\nBorrachas: %12.2f", borrachas);
    printf("\nCanetas: %12.2f", canetas);
    printf("\nCadernos: %12.2f", cardernos);
    printf("\nFitas: %12.2f\n\n", fitas);
    
    system("PAUSE");
    return 0;
}