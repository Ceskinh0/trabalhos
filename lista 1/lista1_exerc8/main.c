#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casa;
    double totalg, grao;
    casa = 1;
    grao = 1;
    totalg = 1;

    printf("casa : %d = %.0lf \n", casa, grao);
    for(casa=2; casa <=64; casa++){
        grao*=2;
        totalg += grao;
        printf("casa : %d = %.0lf \n", casa, grao);
    }
    printf("Total de Graos: %.0lf \n", totalg);
    return 0;
}
