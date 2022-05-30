#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    char nome[51];
    double nota1, nota2, media;
    printf("Gravando resultado da prova \n");
    printf("Digite o nome do aluno: \n");
    scanf("%[^\n]", &nome);
    printf("Digite a nota do 1 bimestre \n");
    scanf("%lf", &nota1);
    printf("Digite a nota do 2 bimestre \n");
    scanf("%lf", &nota2);
    media = (nota1 + nota2) / 2;
    //gravando os dados no arquivo notas
    //abrir arquivo
    FILE *fp = fopen("notas.txt", "a");
    fprintf(fp, "aluno: %s \t nota1: %.2f \t nota2: %.2f \t Media: %.2f \n", nome, nota1, nota2, media);

    fclose(fp);
    return 0;
}
