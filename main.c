#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=0;

    for(int i=1; i<=10; i++){
        printf("Digite um valor: ");
        scanf("%d", &num);
        if(num %2 ==0){
            cont++;
        }
    }
    printf("Quantidade de pares: %d \n", cont);
    return 0;
}
