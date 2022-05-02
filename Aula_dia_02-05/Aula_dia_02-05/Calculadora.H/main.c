#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.H"

int montarMenu();
int lerDado();

int main()
{
    int opc;
    do{
      opc = montarMenu();
      if(opc == 5) break;
      int a, b;
      a = lerDado();
      b = lerDado();
      switch(opc){
        case 1:
            printf("Soma: %d \n", somar(a, b));
            break;
        case 2:
            printf("Subtracao: %d \n", subitrair(a, b));
            break;
        case 3:
            printf("Multiplicacao: %d \n", multiplicar(a, b));
            break;
        case 4:
            printf("Divisao: %d \n", dividir(a, b));
            break;
        default:
            printf("Opcao invalida \n");
      }
    }while(opc !=5);
  return 0;
}

int montarMenu(){
    system("pause");
    system("cls");
    int opcao;
    int ch;
    //while((ch = getchar()) != '\n' && ch != E0F) continue; <-- linux
    printf("Menu Principal \n");
    printf("1. somar...: \n");
    printf("2. subtrair...: \n");
    printf("3. multiplicar...: \n");
    printf("4. dividir...: \n");
    printf("5. sair...: \n");
    scanf("%d", &opcao);
  return opcao;
}

int lerDado(){
    int valor;
    printf("Digite um valor: \n");
    scanf("%d", &valor);
  return valor;
}
