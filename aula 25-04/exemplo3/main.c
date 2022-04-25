#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sobrenome[16] = {'\0'}, nome[16] = {'\0'};
    char completo[33] = {'\0'};

    fflush(stdin);
    printf("Digite o nome: \n");
    scanf("%[^\n]", nome);

    strcat(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);
    printf("Nome completo: %s\n", completo);

    printf("total de caracteres: %d \n", strlen(completo));
    return 0;
}
