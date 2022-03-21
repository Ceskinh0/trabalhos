#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int somapar=0, somaimp=0;
    do{
      do{
        printf("digite o valor positivo: [acima de 1000 para parar]\n");
        scanf("%d", &valor);
        }while(valor<0);
        if(valor %2 == 0){
            somapar += valor;
        }else{
            somaimp += valor;
        }
    }while(valor<=1000);
    printf("soma dos pares: %d\n soma dos impares: %d", somapar, somaimp);
    return 0;
}
