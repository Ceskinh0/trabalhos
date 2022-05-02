#include <stdio.h>
#include <stdlib.h>
#include "vetor.H"
#define TAM 15

int main()
{
    int vetor[TAM];
    lerVetor(vetor, TAM);
    int maior = encontrarMaior(vetor, TAM);
    int menor = encontrarMenor(vetor, TAM);
    int qtdMaior = encontrarOcorrencia(vetor, TAM, maior);
    int qtdMenor = encontrarOcorrencia(vetor, TAM, menor);
    printf("Maior valor: %d \n", maior);
    printf("Menor valor: %d \n", menor);
    printf("Quantidade de ocorrencia do maior valor: %d \n", qtdMaior);
    printf("Quantidade de ocorrencia do menor valor: %d \n", qtdMenor);
    return 0;
}
