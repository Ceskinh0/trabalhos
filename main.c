#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, menor, numero;
    double media, soma=0;

    for(int i=0; i<5; i++){
        printf("digite o %d* valor: ", i+1);
        scanf("%d", &numero);
        soma += numero;
        if(i == 0){
            maior = numero;
            menor = numero;
            continue;
        }
        if(numero < maior) maior = numero;
        if(numero > menor) menor = numero;
    }
    media = soma / 5.0;
    printf("Media dos 05 valores: %.2lf \n", media);
    printf("Maior valor: %3d \nMenor valor: %3d \n", maior, menor);
    return 0;
}
