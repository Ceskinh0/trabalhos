#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[101];
    printf("digite uma frase: ");
    scanf("%[^\n]", frase);

    printf("a frase digitada foi: %s\n", frase);

    //isso nao funciona:
    /*(if(frase == "fatec"){
        printf("Frase igaul");
    }
    */
    if(strcmp(frase, "fatec")==0){
        printf("Frase igual \n");
    }
    printf("%d \n", strcmp(frase, "fatec"));

    return 0;
}
