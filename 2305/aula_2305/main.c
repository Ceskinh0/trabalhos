#include <stdio.h>
#include <stdlib.h>
struct Pessoa {
    int registro;
    char nome[51];
    char email[51];
};

int main()
{
    struct Pessoa pessoa;
    printf("digite o registro da pessoa: ");
    scanf("%d", &pessoa.registro);

    fflush(stdin);
    printf("digite o nome da pessoa: ");
    scanf("%[^\n]", pessoa.nome);

    fflush(stdin);
    printf("digite o email da pessoa: ");
    scanf("%[^\n]", pessoa.email);

    printf("Registo: %d \n", pessoa.registro);
    printf("Nome...: %s \n", pessoa.nome);
    printf("Email..: %s \n", pessoa.email);

    return 0;
}
