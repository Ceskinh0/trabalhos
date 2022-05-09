#include <stdio.h>
#include <stdlib.h>
int fatorial(int n);
int main()
{
    printf("fatorial de 5 = %d\n", fatorial(5));
    return 0;
}

//funcao recursiva
int fatorial(int n){
    if(n == 1) return 1;
    return n * fatorial(n - 1);
}

