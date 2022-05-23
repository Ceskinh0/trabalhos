#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

void inicializar(Aluno* p[], int tam){
    for(int i=0; i<tam; i++){
        p[i] = NULL;
    }
}

void adicionar(Aluno* p[], int pos){
    p[pos] = (Aluno*)malloc(sizeof(struct aluno));
    fflush(stdin);
    printf("Digite o nome do aluno: \n");
    scanf("%[^\n]", p[pos]->nome);
    fflush(stdin);
    printf("Digite a matricula do aluno: \n");
    scanf("%d", &p[pos]->mat);
    fflush(stdin);
    printf("Digite o endereco do aluno: \n");
    scanf("%[^\n]", p[pos]->endereco);
    fflush(stdin);
    printf("Digite o telefone do aluno: \n");
    scanf("%[^\n]", p[pos]->fone);
    fflush(stdin);
    printf("Digite o nota do aluno: \n");
    scanf("%f", &p[pos]->nota);
    printf("Registro cadastro com sucesso \n");
}
void listarTodos(Aluno* p[], int pos){
    for(int i=0; i<pos; i++){
        printf("Dados do Registro: %d \n", i+1 );
        printf("Nome da Pessoa: %s \n", p[i]->nome);
        printf("Matricula da Pessoa: %d \n", p[i]->mat);
        printf("Endereço da Pessoa: %s \n", p[i]->endereco);
        printf("Telefone da Pessoa: %s \n", p[i]->fone);
        printf("Nota da Pessoa: %.2f \n", p[i]->nota);
        printf("--------------------------------------\n");
    }
}

void encontrar(Aluno* p[], int proc, int pos){
    for(int i=0; i<pos; i++){
        if(proc== p[i]->mat){
            printf("Dados do Registro: %d \n", i+1 );
            printf("Nome da Pessoa: %s \n", p[i]->nome);
            printf("Matricula da Pessoa: %d \n", p[i]->mat);
            printf("Endereço da Pessoa: %s \n", p[i]->endereco);
            printf("Telefone da Pessoa: %s \n", p[i]->fone);
            printf("Nota da Pessoa: %.2f \n", p[i]->nota);
            printf("--------------------------------------\n");
            return;
        }
    }
    printf("Registro não encontrado \n");
}

void atualizar(Aluno* p[], int proc, int pos){
    int resp = 0;
    for(int i=0; i<pos; i++){
        if(proc== p[i]->mat){
            printf("Atualizar Registro: %d \n", i+1 );
            printf("Atualizar o nome? [0] nao, [1] sim\n");
            scanf("%d", &resp);
            if(resp){
                fflush(stdin);
                printf("Nome da Pessoa: %s \n", p[i]->nome);
                printf("Digite o novo nome: \n");
                scanf("%[^\n]", p[i]->nome);
            }
            printf("Atualizar o endereço? [0] nao, [1] sim\n");
            scanf("%d", &resp);
            if(resp){
                fflush(stdin);
                printf("Endereço da Pessoa: %s \n", p[i]->endereco);
                printf("Digite o novo endereco: \n");
                scanf("%[^\n]", p[i]->endereco);
            }
            printf("Atualizar o telefone? [0] nao, [1] sim\n");
            scanf("%d", &resp);
            if(resp){
                fflush(stdin);
                printf("Telefone da Pessoa: %s \n", p[i]->fone);
                printf("Digite o novo telefone: \n");
                scanf("%[^\n]", p[i]->fone);
            }
            printf("Atualizar a nota? [0] nao, [1] sim\n");
            scanf("%d", &resp);
            if(resp){
                fflush(stdin);
                printf("Nota da Pessoa: %.2f \n", p[i]->nota);
                printf("Digite a nova nota: \n");
                scanf("%f", &p[i]->nota);
            }
            printf("Registro Atualizado com sucesso \n");
            return;
        }
    }
    printf("Registro não encontrado \n");
}
