#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    do{
        printf("Digite um valor maior que 1.: ");
        scanf("%d", &valor);
    }while(valor < 2);
    for(int tentado=2; tentado<=valor; tentado++){
        int primo=1;
        for(int i=2; i<=tentado/2; i++){
            if(tentado % i == 0){
                primo = 0;
                break;
            }
        }
        if (primo){
            printf("[%d]",tentado);
        }
    }
}
