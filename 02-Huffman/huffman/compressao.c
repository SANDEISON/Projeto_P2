#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "compressao.h" //inclui os Protótipos

//Definição do tipo de dados
struct compress{
    char entrada[255];
};

Compress* entrada_Diretorio(char ent[]){
    Compress* p = (Compress*) malloc(sizeof(Compress));
    if(p != NULL){ //se a alocação for correta
        strcpy(p->entrada, ent);
    }
    return p;// retorna o ponto
}


void huff(Compress* p){



    printf("%s\n",p->entrada);



}
