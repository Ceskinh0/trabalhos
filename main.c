#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioBruto, impostoPagar;
    char estadoCivil;

    printf("Digite o Salario Bruto: \n");
    scanf("%lf", &salarioBruto);

    fflush(stdin);
    printf("Digite 'c' para casado ou 's' para solteiro: \n");
    estadoCivil = getchar();
    impostoPagar = 0;

    switch (estadoCivil){
        case 'c':
        case 'C':
            impostoPagar = salarioBruto * 0.09;
            break;

        case 's':
        case 'S':
            impostoPagar = salarioBruto * 0.10;
            break;
        default:
            printf("nao ha calculo para esse estado civil!\n");
            return 0;
    }
    printf("imposto a pagar: %.2lf \n", impostoPagar);
    return 0;
}
