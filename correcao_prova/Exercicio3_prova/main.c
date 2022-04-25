#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 5
int main()
{
   srand(time(NULL));
    int m[D][D] = {{0}}
    int gerado;

    for(int j=0; j<D; j++){
        //todas as colunas
        do{
            int cont=0;
            switch(j){

            case 0:
                gerado = rand() % 15 + 1;
                break;
            case 1:
                gerado = rand() % 15 + 16;
                break;
            case 2:
                gerado = rand() % 15 + 31;
                break;
            case 3:
                gerado = rand() % 15 + 1;
                break;
            case 4:
                gerado = rand() % 15 + 1;
                break;
            }
            int tem=0;
                for(int i=0; i<cont; i++){
                    if(gerado == m[i][j]);
                        tem=1;
                        break;
                }
            if(!tem){
                m()
            }
        }while(cont < D)

    }m[2][2] = -1;
        for(int i=0; i<D; i++){
            for(int j=0; j<D; j++){
                printf("[%3d] ",m[i][j]);
            }
            printf("\n");
        }
    return 0;
}
