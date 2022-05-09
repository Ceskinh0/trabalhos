#include <stdio.h>
#include <stdlib.h>
void opera(int n);

int main()
{
    int valor;
    printf("Digite um  valor maior que 0.: \n");
    scanf("%d", &valor);
    opera(valor);
    return 0;
}

void opera(int n){
    if(n == 0) return;
    if(n % 2 == 0){
        printf("|%d \n", n);
        opera(n-1);
    }else{
        opera(n-1);
        printf("*%d \n", n);
    }
}

