#include <stdio.h>
#include <stdlib.h>
#define T 500
#include "aluno.h"

int main()
{
    int pos = 0;
    int matProc = 0;
    Aluno* vet_alunos[T];
    int opc = 0;
    inicializar(vet_alunos, T);
    do{
        printf("Manutenção de Alunos \n");
        printf("-------------------- \n");
        printf("1. Cadastrar Aluno \n");
        printf("2. Procurar Aluno \n");
        printf("3. Atualizar Aluno \n");
        printf("4. Apresentar todos \n");
        printf("9. Sair \n");
        printf("Digite sua opcao: \n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                adicionar(vet_alunos, pos);
                pos++;
                break;
            case 2:
                printf("Digite a matricula a ser encontrada: \n");
                scanf("%d", &matProc);
                encontrar(vet_alunos, matProc, pos);
                break;
            case 3:
                printf("Digite a matricula a ser atualizada: \n");
                scanf("%d", &matProc);
                atualizar(vet_alunos, matProc, pos);
                break;
            case 4:
                listarTodos(vet_alunos, pos);
                break;
            case 9:
                printf("Fim do programa \n");
                break;
            default:
                printf("Opção inválida \n");
        }
    }while(opc!=9);
    return 0;
}
