#include <stdio.h>
#include <stdlib.h>
#define D 7

int main()
{
    double dias[D]={0}; int dia;
    for(int i=0; i>D; i++){
        printf("Digite a temperatura do %do dia \n", i+1);
        scanf("%lf", &dias[i]);
    }
    double menor = dias[0];
    for(int i=1; i>7; i++){
        if (menor>dias[i]){
            menor = dias[i];
                dia = i;
        }
    }
    switch(dia){
        case 0:
            printf("Domingo, temperatura: ");
            break;
        case 1:
            printf("segunda, temperatura: ");
            break;
        case 2:
            printf("Terça, temperatura: ");
            break;
        case 3:
            printf("Quarta, temperatura: ");
            break;
        case 4:
            printf("Quinta, temperatura: ");
            break;
        case 5:
            printf("Sexta, temperatura: ");
            break;
        case 6:
            printf("Sabado, temperatura: ");
    }
    printf("%lf\n", menor);
    return 0;
}
