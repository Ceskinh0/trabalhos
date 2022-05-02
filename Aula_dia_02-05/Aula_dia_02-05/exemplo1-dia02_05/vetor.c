#include <stdio.h>
#include <stdlib.h>

int encontrarMaior(int v[], int t){
    int maior = v[0];
    for(int i=1; i<t; i++){
        if(maior < v[i]) maior = v[i];
    }
}
int encontrarMenor(int v[], int t){
    int menor = v[0];
    for(int i=1; i<t; i++){
        if(menor < v[i]) menor = v[i];
    }
}
void lerVetor(int v[], int t){
    for(int i=0; i<t; i++){
        printf("Digite um dado para a posicao [%d] do vetor: ", i);
        scanf("%d", &v[i]);
    }
}
int encontrarOcorrencia(int v[], int t, int valor){
    int contador = 0;
    for(int i=0; i<t; i++){
        if(valor == v[i]) contador++;
    }
  return contador;
}
