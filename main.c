#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escreva um programa que calcule o imposto
    pago por mulheres e por homens, sabendo-se que
    mulheres pagam 10% de imposto
    sobre o sal�rio e homens
    pagam mais 5% do que as mulheres*/

    double salario, imposto;
    char sexo;

    printf("Digite o seu salario: \n");
    scanf("%lf", &salario);

    fflush(stdin);
    printf("Digite o seu sexo sendo 'f' para feminino e 'm' para masculino: \n");
    scanf("%c", &sexo);

    switch(sexo){
            case 'm':
            case 'M':
                imposto = salario * 0.05;
                break;
            case 'f':
            case 'F':
                imposto = salario * 0.10;
                break;
            default:
                printf("opcao invalida!");
                break;
    }
        printf("o imposto a pagar sera de: %.2lf \n", imposto);
}
