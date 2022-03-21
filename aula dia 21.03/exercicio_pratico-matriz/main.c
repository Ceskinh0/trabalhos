#include <stdio.h>
#include <stdlib.h>
#define T 3

int main()
{
int ma[T][T], mb[T][T], mr[T][T];
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            printf("Digite o valor para [%d][%d]: \n", i, j);
            scanf("%d", &ma[i][j]);
        }
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
         printf("Digite o valor para [%d][%d]: \n", i, j);
         scanf("%d", &mb[i][j]);
        }
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
         mr[i][j] = (ma[i][j]) + (mb[i][j]);
         printf("[%d]", mr[i][j]);
        }
    printf("\n");
    }
return 0;
}
