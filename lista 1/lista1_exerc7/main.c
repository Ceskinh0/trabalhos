#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto;
    int total1=0, total2=0, total3=0, total4=0, totalnulo=0, totalbranco=0;
    do{
        printf("Vote pelo numero\n");
        printf("1. candidato1 \n");
        printf("2. candidato2 \n");
        printf("3. candidato3 \n");
        printf("4. candidato4 \n");
        printf("5. anular voto \n");
        printf("6. voto em branco \n");

        printf("digite seu voto e tecle enter: \n");
        scanf("%d", &voto);

        switch(voto){
    case 1 :
            total1++;
            break;
    case 2 :
            total2++;
            break;
    case 3 :
            total3++;
            break;
    case 4 :
            total4++;
            break;
    case 5 :
            totalnulo++;
            break;
    case 6 :
            totalbranco++;
            break;
    case 9 :
            printf("totalizando \n");
            break;
    default:
        printf("opcao invalida! \n");
        break;
        }
    }while(voto != 9);
    printf("total de cada candidato: \n");
    printf("candidato 1: %d\n", total1);
    printf("candidato 2: %d\n", total2);
    printf("candidato 3: %d\n", total3);
    printf("candidato 4: %d\n", total4);
    printf("votos nulos: %d\n", totalnulo);
    printf("votos em branco: %d\n", totalbranco);
    return 0;
}
