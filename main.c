#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "compressao.h"
#define L_TELA system("cls")
#define E_TECLA getch()

int main(){
    int opcao;
    char h[999];
    FILE *f = NULL;
    printf("DIGITE O ENDERECO DO ARQUIVO: \n");
    scanf("%s",h);

    printf("1 - COMPRESSAO\n");
    printf("2 - DESCOMPRESSAO\n");
    printf("3 - SAIR\n");
    printf("ESCOLHA UMA OPCAO: ");
    scanf("%d",&opcao);
    f = fopen(h, "r");
    compress(f);



    return 0;
}
