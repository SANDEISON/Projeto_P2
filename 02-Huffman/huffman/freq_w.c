#include <stdio.h>
#include <stdlib.h>
#include "freq_w.h"
#include <locale.h>

int *freq_w(FILE *f){
	if(f == NULL){
		printf("ERRO NA LEITURA DO ARQUIVO!\n");
		return NULL;
	}

    setlocale(LC_ALL,"");
	unsigned char x;
	int i;
	int *countsort;
	countsort = (int*)malloc(256*sizeof(int));
	for ( i = 0; i < 256; i++ ){
		countsort[i] = 0;
	}
	while(1){
		x = fgetc(f);
		if(feof(f)){
			break;
		}
		countsort[x]++;
	}
	return countsort;
}
