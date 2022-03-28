#include <stdio.h>
#include <stdlib.h>
#define D 7
int main()
{
    int M [D][D]= {0};

    for(int X = 0; X<D; X++){
        M[X][X]=1;
    }
    for(int i=0; i<D; i++){
        for(int j=0; j<D; j++){
            printf("[%3d]");
        }
     printf("\n");
    }
return 0;
}
