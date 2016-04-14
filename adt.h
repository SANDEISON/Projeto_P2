#ifndef ADT_H
#define ADT_H

typedef struct node node;
typedef struct pnode pnode;
//FUNCTIONS
//NODE:
node *createnode();
int isEmpty(node *first);
node *insertnode( node *first, int value, unsigned char character );
void printlist(node *first);
//EndNODE
//PNODE
pnode *startpnode();
pnode *createpnode(int value, char character, pnode *left, pnode *right);
int ispEmpty(pnode *first);
pnode *insertpnode( pnode *first, pnode *insert );
int h_tree(pnode *root);
//EndPNODE
//HUFFMAN_TREE:
pnode *makeHtree(pnode *first);
//EndHUFFMAN_TREE
//EndFUNCTIONS

#endif //ADT_H
