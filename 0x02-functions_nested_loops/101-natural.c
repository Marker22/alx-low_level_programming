#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	long int sum_of_muitiples_3 = 0;
	long int sum_of_multiples_5 = 0;
	long int sum_of_multiples_3_5 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum_of_multiples_3 += i;
		} else if ((i % 5) == 0)
		{
			sum_of_multiples_5 += i;
		}
	}
	sum_of_multiples_3_5 = sum_of_multiples_3 + sum_of_multiples_5;
	printf("%lu\n", sum_of_multiples_3_5);
	return (0);
}
