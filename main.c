#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor;

    printf("digite o valor:");
    scanf("%d", &valor);

    for(int i=1; i<=100; i++){
    printf("%3d X %3d = %3d | ", valor, i, valor * i);
        if(i %10 == 0) printf("\n\n");
    }
  }
