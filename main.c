#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Implemente um programa que calcule os aumentos de um ordenado
    para o corrente ano. Se o ordenado for > 1000
    deve ser aumentado em 5%, se n�o deve ser aumentado em 7%*/

    double salario;

    printf("Digite o seu salario: \n");
    scanf("%lf", &salario);

    salario = salario > 1000 ? salario * 1.05 : salario * 1.07;

    printf("seu novo salario eh : RS%.2lf", salario);
}
