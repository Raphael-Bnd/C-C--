//LEITURA DE NUMEROS INTEIROS

#include <stdio.h>
#include <stdlib.h>

int main(void){


    int dia, mes, ano;
    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Dia %d\n", dia);
    printf("Mes %d\n", mes);
    printf("Ano %d\n", ano);
    printf("%8.2f", 1234.56);

    return (0);
}