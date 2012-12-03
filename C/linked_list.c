#include <stdlib.h>


typedef struct Node {
	int value;
	struct Node *next;
} myNode;

myNode *head, *tail;

void build_list(int);
void print_list ();
void insert(int);
myNode* reverse(myNode* root);
int find_kth_element(int k);

int main (){
	build_list(10);
	print_list();
	reverse(head);
	print_list();
	printf("middle of linked list is %d \n", find_kth_element(3));
}


void insert(int val)
{
	myNode *node = (myNode *)malloc (sizeof (struct Node));
	node->value = val;
	node->next = NULL;

	if (head == NULL){
		head = node;
		tail = node;
		return;
	}

	tail->next = node;
	tail = tail->next;
}

void build_list(int count)
{
	int i = count;
	for (i; i >= 0; i--)
	{
		insert(i);
	}
}


void print_list ()
{
	myNode *temp;
	for (temp = head; temp != NULL; temp = temp->next)
	{
		printf(" %d -> ", temp->value);
	}
	printf("NULL \n");
}

myNode * reverse(myNode *root)
{
   	myNode* prev   = NULL;
    myNode* current = head;
    myNode* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    head = prev;
}

int find_kth_element(int k)
{
	myNode *ret = head;
	myNode *temp = head;
	int i = 0;
	
	for (; temp != NULL; temp = temp->next, i++)
	{
		if (i % k == 0)
			ret = ret->next;
	}
	return ret->value;
}



