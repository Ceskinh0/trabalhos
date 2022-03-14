#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raz;

    printf("digite uma razao:");
        scanf("%d", &raz);
    int x = 1;
    for(int i=1; i<=10; i++){
        printf("\t %d \n", x);
        x+= raz;
    }
    return 0;
}
