#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

//STRUCTS
struct node{
    int v;
    unsigned char c;
    node *nextnode;
};

struct pnode{
    int v;
    unsigned char c;
    pnode *nextpnode;
    pnode *left;
    pnode *right;
};
//EndSTRUCTS

//FUNCTIONS
//NODE
node *createnode(){
	return NULL;
}
int isEmpty(node *first){
	return (first == NULL);
}
node *insertnode( node *first, int value, unsigned char character ){
    node *newnode = (node*)malloc(sizeof(node));
	newnode -> v = value;
	newnode -> c = character;
	newnode -> nextnode = first;
	return newnode;
}
void printlist(node *first){
	if(!isEmpty(first)){
		printf("Letra %c com frequencia %d\n", first -> c, first -> v);
		printlist(first -> nextnode);
	}
}
//EndNODE
//PNODE
pnode *startpnode(){
    return NULL;
}
int ispEmpty(pnode *first){
    return (first == NULL);
}
pnode *createpnode(int value, char character, pnode *left, pnode *right){
    pnode *aux;
    aux = (pnode*)malloc(sizeof(pnode));
    aux -> v = value;
    aux -> c = character;
    aux -> left = left;
    aux -> right = right;
    aux -> nextpnode = NULL;
    return aux;
}
pnode *insertpnode(pnode *first, pnode *insert){
    if(ispEmpty(first)){
        insert -> nextpnode = first;
        return insert;
    }
    else if(insert -> v >= first -> v ){
        first -> nextpnode = insertpnode(first -> nextpnode, insert);
        return first;
    }
    else{
        insert -> nextpnode = first;
        return insert;
    }
}
int h_tree(pnode *root){
    int h;
    h = 0;
    //IMPLEMENTAR HTREE.
    return h;
}
//EndPNODE
//Obs:
/*
 *RECEBE A CABECA DE UMA LISTA DE PRIORIDADE, SELECIONA OS 2 ELEMENTOS DE MENOR FREQUENCIA, CRIA UM NOVO NODE QUE APONTA PRA ESSES DOIS CARAS E INSERE ESSE NODE NUMA LISTA DE PRIORIDADE QUE COMEÇA A PARTIR DO TERCEIRO ELEMENTO
*/
//HUFFMAN_TREE:
pnode *makeHtree(pnode *first){
    int value;
    pnode *root;
    root = startpnode();
    if(!ispEmpty(first)){
        if(!ispEmpty(first -> nextpnode)){
            value = (first -> v) + (first -> nextpnode -> v);
            root = createpnode( value, '*', first, first -> nextpnode);
            root = insertpnode(first -> nextpnode -> nextpnode, root);
            root = makeHtree(root);
        }
        else if(h_tree(first) == 0){
            value = first -> v;
            root = createpnode( value, '*', first, first -> nextpnode);
        }
    }
    return root;
}
//EndHUFFMAN_TREE
//EndFunctions--
