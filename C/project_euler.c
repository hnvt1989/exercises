/**
  exercise for project euler
*/

#include <stdlib.h>

/*problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
int sum_divisible(int min, int max, int* div, int div_length, int* run_time);
void sum_divisible_test();


int main()
{

	sum_divisible_test();
}

// O(n^2) time, O(n) space
int sum_divisible(int min, int max, int* div, int div_length, int* run_time)
{
	int sum = 0;

	int i,j,t;
	
	for (i = min; i < max; i++)
	{
		t = 0;
		for (t; t < div_length; t++)
		{
			if ((i % div[t]) == 0)
			{
				sum += i;
				break;
			}
			(*run_time)++;
		}
	}
	return sum;
}

void sum_divisible_test()
{
	int min = 0; int max = 1000;

	printf("div list: \n");
	int i = 0;
	int length = 3;
	int div[] = { 2, 3, 5};
	printf(" [ ");
	for (i; i < length; i++)
	{
		printf("%d ", div[i]);
	}
	printf(" ] \n");
	int run_time = 0;
	printf("Sum of numbers from %d to %d that are divisible by this list is : %d \n", min, max, sum_divisible(min,max, div, length,&run_time));
	printf("Total run time %d \n ", run_time);
}
