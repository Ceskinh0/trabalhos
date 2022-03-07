#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario;
    char sexo;

    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);

    fflush(stdin);
    printf("Digite 'f' para feminino e 'm' para masculino: \n");
    sexo = getchar();

    switch(sexo){
        case 'f' :
        case 'F' :
            salario *= 1.10;
            break;
        case 'm' :
        case 'M' :
            salario *= 1.09;
            break;
        default:
            printf("Entre com o sexo corretamente\n");
            return 0;
    }
    printf("o seu novo salario: %.2lf \n", salario);

}
