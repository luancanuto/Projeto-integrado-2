#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome;
    float massa, altura, imc;

    printf("Digite seu peso (em kg) e sua altura (em metros) e seu nome: ");
    scanf("%f%f %c", &massa, &altura, &nome);

    imc = massa / (altura * altura);

    if(imc < 18.5)
        printf("IMC: %f\tAbaixo do peso Nome: %c\n", imc, nome);
    else if(imc >= 18.5 && imc < 25)
        printf("IMC: %f\tPeso normal %c\n", imc, nome);
    else if(imc >= 25 && imc < 30)
        printf("IMC: %f\tSobrepeso%c\n", imc, nome);
    else if(imc >= 30 && imc < 35)
        printf("IMC: %f\tObesidade grau 1%c\n", imc, nome);
    else if(imc >= 35 && imc < 40)
        printf("IMC: %f\tObesidade grau 2%c\n", imc, nome);
    else
        printf("IMC: %f\tObesidade grau 3%c\n", imc, nome);
}
