#include <stdio.h>
#include <math.h>

int main() {
    double altura_degrau_cm, altura_total_m;
    double altura_total_cm;
    int degraus;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%lf", &altura_degrau_cm);

    printf("Digite a altura total desejada em metros: ");
    scanf("%lf", &altura_total_m);

    altura_total_cm = altura_total_m * 100.0;
    degraus = (int)ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus: %d\n", degraus);

    return 0;
}
