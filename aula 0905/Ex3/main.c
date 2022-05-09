#include <stdio.h>
#include <stdlib.h>
void up(int n);
void down(int n);
int main()
{
    int valor;
    printf("Digite um valor maior que 1..: \n");
    scanf("%d", &valor);
    up(valor);
    printf("\n");
    down(valor);
    return 0;
}

void up(int n){
    if(n==0) return;
    up(n-1);
    printf("\n %d \n", n);
}

void down(int n){
    if(n==0) return;
    printf("\n %d \n", n);
    down(n-1);
}
