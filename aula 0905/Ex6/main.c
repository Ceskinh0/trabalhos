#include <stdio.h>
#include <stdlib.h>
#define TAM 5
void alimentarVetor(int v[], int t);
void imprimirVetor(int v[], int t);
void encontrarMaior(int v[], int t);
void encontrarMenor(int v[], int t);

int main()
{
    int vetor(TAM);
    alimentarVetor(vetor);
    imprimirVetor(vetor);
    int maior = encontrarMaior(vetor);
    int menor = encontrarMenor(vetor);
    printf("Maior Valor: %d \n", maior);
    printf("Menor Valor: %d \n", menor);
    return 0;
}

void alimentarVetor(int v[], int t){
    for(int i = 0; i<t; i++){

    }





}
