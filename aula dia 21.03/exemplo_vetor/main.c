#include <stdio.h>
#include <stdlib.h>

int main()
{
    //vetor de 10 posiçoes do tipo double
    double notas[10];
    //alimentar com 10 valores (usuario)
    for(int i=0; i<10; i++){
        printf("Digite a nota:  \n");
        scanf("%lf", &notas[i]);
    }
    //media das notas
    double soma=0;
    for(int i=0; i<10; i++){
        soma += notas[i];
    }
    double media = soma / 10;
    printf("Valores da media das notas: %lf \n", media);
    return 0;
}
