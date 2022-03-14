#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, valor;

    printf("digite o valor a ser calculado: ");
    scanf("%d", &num);

   for(int i=1; i<=10; i++){
    valor = num * i;

  printf("\t ||%d X %d = %5d|| \n", num, i, valor);
    }
}
