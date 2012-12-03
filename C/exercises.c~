#include <stdlib.h>



void swap (int* a , int* b); //inplace swapping of two intergers
void strrev(char *p); //string reverse, using XOR-Swap
void str_copy(char* p, char* q); //string copy
int str_cmp(char* s, char* t); //string compare


int main(int argc, char** argv)
{
	char q1[] = "hello world";
	char q2[] = "whats up";
	char*  q = q1;
	char*  p = q2;
	printf("q and p are equal ? -> %s \n ", (str_cmp(q,p) == 0) ? "True" : "False");
	str_copy(p, q);
	printf("String p is %s \n", p);
	printf("q and p are equal ? -> %s \n ", (str_cmp(q,p) == 0) ? "True" : "False");
}

void swap(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}


void strrev(char *p)
{
	char *q = p;
	while(q && *q) ++q; //get to the end of the string

	
  	for(--q; p < q; ++p, --q)
	{
    	*p = *p ^ *q,
		*q = *p ^ *q,
		*p = *p ^ *q;
	}
}

//good implementation of string copy function
void str_copy(char* p, char* q)
{
	while(*p++ = *q++)
		;
}

int str_cmp(char* s, char* t)
{
	for (; *s == *t ; s++, t++)
	{
		if (*s == '\0')
			return 0;	
	}

	return *s - *t;
}

//concatenate string t to string s
void str_cat(char* s, char *t)
{
	char* p = s;
	while (p && *p) p++; //go to the end of string (before '\0')
	
}




