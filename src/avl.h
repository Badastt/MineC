#ifndef AVL_H
#define AVL_H

typedef struct {
	int x;
	int y;
	int z;
	int id;
} block;

typedef struct node {
	block data;
	char bal;
	struct node *left, *right;
} node;

node* rotEE(node*);
node* rotDD(node*);
node* rotED(node*);
node* rotDE(node*);
node *rotEEremove (node*, int*);
node *rotDDremove (node*, int*);
node* rotEDremove (node*, int*);
node* rotDEremove (node*, int*);

block min (node*);
block max (node*);

int compareBlocks (block, block);
node* insertNode (node*, block, int*);
void insertBlock (node**, block);
node *removeNode (node*, block, int*);
void removeBlock (node**, block);

void destroyChunk (node*);

#endif