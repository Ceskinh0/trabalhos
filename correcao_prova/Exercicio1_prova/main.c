#include <stdio.h>
#include <stdlib.h>

int main()
{
    double soma = 0.0;
    for(int a=1, b=1; a<60; a+=2, b++){
        if(b %2 == 1){
        soma += a/(double)b;
        }else{
            soma -= a/(double)b;
        }
    }
    printf("soma: %lf \n",soma);
}
