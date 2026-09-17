#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("Os alunos são num total de %2d alunos.\n", 350);
    printf("Os alunos são num total de %4d alunos.\n", 350);
    printf("Os alunos são num total de %5d alunos.\n", 350);
    printf("Os alunos são num total de %10d alunos.\n\n\n", 350);
    
    system("PAUSE");
    return 0;
}