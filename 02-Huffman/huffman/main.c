#include <stdio.h>
#include <stdlib.h>
#include "compressao.h"

int main()
{
    int opcao = 0;
    char h[999];
    printf("DIGITE O ENDERE\128O DO ARQUIVO: \n");
    scanf("%s",h);

    printf("1 - COMPRESSAO\n");
    printf("2 - DESCOMPRESSAO\n");
    printf("3 - SAIR\n");
    printf("ESCOLHA UMA OP\128AO: ");
    scanf("%d",&opcao);
    compress(h);


    return 0;
}
