#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, numero;

    while(soma < 1000){
        printf("Digite o valor para soma: \n");
        scanf("%d", &numero);
        //for�ar parada com numero negativo
        if(numero < 0) break;
        soma += numero;
    }
    printf("somatoria: %d \n", soma);
    return 0;
}
