#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int a = 17, b = 5;

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
    int resto = a % b;
    // Não tem --> exponenciação em C, mas podemos usar a função pow() da biblioteca math.h
    // int exponenciacao = a ** b; // Isso não é válido em C
    int exponenciacao = (int)pow(a, b); // Usando a função pow() da biblioteca math.h
    int randomico = rand(); // Gera um número aleatório e ele é da biblioteca stdlib.h

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    printf("Resto: %d\n", resto);
    printf("Exponenciação: %d\n", exponenciacao);
    printf("Número aleatório: %d\n", randomico);

    system("PAUSE");
    return 0;
}