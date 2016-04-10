#include <stdio.h>
#include <stdlib.h>
#include "compressao.h"

int main()
{
    Compress *comp;

    comp = entrada_Diretorio("c://sandeison/casa/ufal");

    huff (comp);

    char entrada = "";


    return 0;
}
