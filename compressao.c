//FALTA AJEITAR A ARVORE, QUANDO SÓ SE TEM UM ELEMENTO FAZ FOLHA!

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include "freq_w.h"
#include "plisa.h"
#include "compressao.h"
#include "adt.h"

#define DEBUG 1

void compress(FILE *f){
    setlocale(LC_ALL,"");
	pnode *pn;
    pn = startpnode();
    pn = plista(f);
    pn = makeHtree(pn);
    printf("FIM DA COMPRESSAO!\n");
}
