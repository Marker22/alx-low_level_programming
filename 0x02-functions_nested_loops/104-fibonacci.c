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
	unsigned long int i = 0, j = 1, a = 0, b = 2;
	unsigned long int first, second, third;
	int count;

	printf("%lu, %lu, ", a, b);
	for (count = 2; count < 98; count++)
	{
		if (a + b > 10000000000 || a > 0 || i > 0)
		{
			first = (j + b) / 10000000000;
			second = (j + b) % 10000000000;
			third = i + a + first;
			i = a, a = third;
			j = b, b = second;
			printf("%lu%010lu", a, b);
		}
		else
		{
			second = j + b;
			j = b, b = second;
			printf("%lu", b);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
