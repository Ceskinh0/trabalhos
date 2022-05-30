#include <stdio.h>
#include <stdlib.h>


int main()
{
    int ch;
    FILE *fp = fopen("teste.txt", "r");
    if(fp == NULL){
        printf("Arquivo nao encontrado \n");
    }else{
        printf("Arquivo encontrado \n");
        while((ch = fgetc(fp)) !=EOF){
            putchar(ch);
        }
        printf("Vamos fechar o arquivo \n");
        fclose(fp);
        printf("Arquivo fechado \n");
    }

    return 0;
}
