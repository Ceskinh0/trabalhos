#include <stdio.h>
#include <stdlib.h>
int fibo(int n);
int main()
{
    printf("%d\n", fibo(12));
    return 0;
}

int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return fibo(n-1) + fibo(n-2);
    }
}

