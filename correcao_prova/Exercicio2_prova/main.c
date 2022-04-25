#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int n;

    do{
       do{
        printf("Digite um numero inteiro: \n");
        scanf("%d", &n);
       }while(n<0 || n>=100);
        if(n %2 == 1) soma+=n;
    }while(n != 0);

    printf("soma = %d\n",soma);
    return 0;
}
