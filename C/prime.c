#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


bool is_prime(int);
void prime_list(int);
int next_prime(int* flags, int prime, int length);
void cross_off(int* flags, int prime, int length);


int main(int argc, char **argv)
{
	if (argc != 2){
		printf("Not Enough argument, please provide an integer to check for prime-ness \n");
		return;
	}
	int input = atoi(argv[1]);
	printf(" %d is prime -> %s \n", input, is_prime(input) ? "true" : "false");

	prime_list(input); 
}

bool is_prime(int value)
{
	int i = 2;
	for (i; i < value; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

//implement Sieve of Eratosthenes
void prime_list(int max)
{
	size_t length = max + 1;
	int* flag = (int*) calloc (length, sizeof(int) * length);
	int i = 0;
	for (i; i < length; i++)
	{
		flag[i] = 1;
	}

	int prime = 2;
	while (prime <= max)
	{
		cross_off(flag, prime, max);
		prime = next_prime(flag, prime, max);
		if (prime >= max)
		{
			break;
		}
	}

	//print
	i = 1;
	printf("list of prime number up to %d : ", max);
	for (i ; i < length; i++)
	{
		if (flag[i] == 1)
			printf(" %d", i);
	}
	printf("\n");
	
}

int next_prime(int* flags, int prime, int length)
{
	int next = prime + 1;
	while (next < length && (flags[next] == 0))
	{
		next++;
	}
	return next;
}

void cross_off(int* flags, int prime, int length)
{
	int i = prime*prime;
	for (i ; i <= length; i += prime)
	{
		flags[i] = 0;
	}
}







