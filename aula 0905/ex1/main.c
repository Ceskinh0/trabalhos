#include <stdio.h>
#include <stdlib.h>
int fatorial(int n);
int main()
{
    printf("fatorial de 5 = %d\n", fatorial(5));
    return 0;
}

int fatorial(int n){
    int fat = 1;
    for(int i = 1; i<=n; i++){
            fat *= i;
        }
    return fat;
}

