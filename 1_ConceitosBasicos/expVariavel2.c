#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int evento = 5;
    char corrida = 'C';
    float tempo = 27.25;

    printf("\nTempo vitorioso: %c", corrida);
    printf("\nCompetição: %d : %f", evento, tempo);
    
    system("PAUSE");
    return 0;
}