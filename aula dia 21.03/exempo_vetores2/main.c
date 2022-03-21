#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [51];
    printf("Digite o nome da pessoa: \n");
    scanf("%[^\n]", nome);

    printf("Nome digitado: %s\n", nome);

return 0;
}
