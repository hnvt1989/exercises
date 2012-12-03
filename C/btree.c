#include <stdlib.h>

typedef struct Node
{
	int value;
	struct Node *left;
	struct Node *right;
}bNode;

bNode *root;

void insert(int);
bNode find(bNode);
void build();
bNode common_ancestor(bNode , bNode);

int main()
{
}



void insert(int val)
{
	bNode node = (bNode *) malloc(sizeof(struct Node));
	node->value = val;
	node->left = NULL;
	node->right = NULL;

	if (root == NULL){
		root = node;
		return;
	}

	while (root != NULL)
	{
		if (root <
	}
}

bNode find(bNode);
void build();
bNode common_ancestor(bNode , bNode);
