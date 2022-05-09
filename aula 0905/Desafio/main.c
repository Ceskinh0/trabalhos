#include <stdio.h>
#include <stdlib.h>
int somar(int n);
int main()
{
    //soma dos divisiveis de 7
    int valor;
    printf("Digite um numero maior que 0.: \n");
    scanf("%d", &valor);
    somar(valor);
    printf("\n A soma de divisiveis por 7 na faixa entre 1 e %d.: \n", valor);
    printf("%d \n", somar(valor));
    return 0;
}

int somar(int n){
    if(n < 7) return 0;
    if(n %7 != 0){
        return 0 + somar(n-1);
    }else{
        printf("%d \n", n);
        return n + somar(n - 1);
    }
}

