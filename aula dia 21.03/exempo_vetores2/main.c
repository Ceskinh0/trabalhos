#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [51];
    char outro[51];
    printf("Digite o nome da pessoa: \n");
    scanf("%[^\n]", nome);

    fflush(stdin);
    printf("Digite outro nome:  \n");
    scanf("%[^\n]", outro);


    printf("Nome digitado 1: %s\n", nome);
    printf("nome digitado 2: %s\n", outro);

    for(int i=0; i<51; i++){
        if(nome[i]=='\0') break;
        printf("%c\n", nome[i]);
    }

return 0;
}
