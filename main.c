#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioBruto, salarioLiquido, impostoPagar;

    printf("Digite o salario Bruto: \n");
    scanf("%lf", &salarioBruto);

    if (salarioBruto < 1000){
        impostoPagar = salarioBruto * 0.05;
        } else {
            if (salarioBruto < 5000){
                impostoPagar = salarioBruto * 0.11;
            } else {
                    impostoPagar = salarioBruto * 0.35;
                }
            salarioLiquido = salarioBruto - impostoPagar;
                printf("salario Bruto:             %8.2lf \n", salarioBruto);
                printf("imposto a pagar:           %8.2lf \n", impostoPagar);
                printf("salario Liquido:           %8.2lf \n", salarioLiquido);
}
}
