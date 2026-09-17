#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao;
    int total_segundos;
    int hora_final, minuto_final, segundo_final;

    printf("Digite o horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    total_segundos = horas * 3600 + minutos * 60 + segundos;
    total_segundos += duracao;

    total_segundos %= 86400;

    hora_final = total_segundos / 3600;
    total_segundos %= 3600;

    minuto_final = total_segundos / 60;
    segundo_final = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           hora_final, minuto_final, segundo_final);

    return 0;
}
