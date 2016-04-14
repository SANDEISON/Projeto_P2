#include <stdio.h>
#include <stdlib.h>
#include "freq_w.h"
#include "plisa.h"
#include "compressao.h"
#include "adt.h"

pnode *plista(FILE *f){
    int *p;
    int i;
    pnode *pn;
    pnode *aux;
    pn = startpnode();
    aux = startpnode();
    p = freq_w(f);
    for( i = 0; i <= 255; i++){
        if(p[i] != 0){
            aux = createpnode(p[i], i, NULL, NULL);
            pn = insertpnode(pn, aux);
        }
    }
    return pn;
}
