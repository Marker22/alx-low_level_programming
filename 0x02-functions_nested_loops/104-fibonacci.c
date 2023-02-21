#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, sum;
	unsigned long int j, k, l, m;
	unsigned long int first, second;

	for (i = 0; i < 92; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
	}
	j = a / 10000000000;
	l = b / 10000000000;
	k = a % 10000000000;
	m = b % 10000000000;
	for (i = 93; i < 98; i++)
	{
		first = j + l;
		second = k + m;
		if (k + m > 9999999999)
		{
			first += 1;
			second %= 10000000000;
		}
		printf("%lu%lu", first, second);
		if (i != 98)
		printf(",");
		j = l;
		k = m;
		l = first;
		m = second;
	}
	printf("\n");
	return (0);
}
