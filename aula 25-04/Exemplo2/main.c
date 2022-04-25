#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 51
int main()
{
    char lista[L][C];
    for(int i=0; i<L; i++){
            fflush(stdin);
        printf("Digite o nome da pessoa: \n");
        scanf("%[^\n]", &lista[i]);
    }
    for(int i=0; i<L; i++){
        for(int j=i+1; j<L; j++){
            if(strcmp(lista[i], lista[j])>0){
                char troca[51] = {'\0'};
                strcpy(troca, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], troca);
            }
        }
    }
    printf("imprimindo a lista em ordem alfabetica \n");
    for(int i=0; i<L; i++){
        printf("%s \n", lista[i]);
    }
  return 0;
}
