#include <stdio.h>

#define Tamanho 5

int fila[Tamanho];
int final = 0, inicio = 0;
int saas();
int menu();

void add(int valor);
void imprimir();

void main(void) {
    int opc = 0, numero;
    while(opc != 3) {
        opc = menu();
        if(inicio == Tamanho-1){
            inicio = 0; final = 0;
        }

        switch (opc) {
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &numero);
                add(numero);
                imprimir();
                break;
            case 2:
                numero = saas();
                if(numero != -1){
                    printf("%d saiu da fila \n", numero);
                    imprimir();
                }
                break;
            case 3:
                break;
            default:
                printf("opiçao invalida\n");

        }
    }
}

int menu(){
    int opc = 0;
    printf("Menu \n");
    printf("1 - add \n");
    printf("2 - saas \n");
    printf("3 - sair \n");
    printf("Digite uma opicao: ");
    scanf("%d", &opc);
    return opc;
}

void add(int valor){
    if(final == Tamanho){
        printf("Ta muito cheio \n");
    }else{
        fila[final] = valor;
        final++;
    }

}

int saas(){
    int aux = 0;
    if(inicio == final){
        printf("A fila esta realmente vasia \n");
        return -1;
    } else{
        aux = fila[inicio];
        inicio++;
        return aux;
    }
}

void imprimir(){
    for(int i = inicio; i <= final-1; i++){
        printf("fila[%d] = %d\n", i, fila[i]);
    }
}