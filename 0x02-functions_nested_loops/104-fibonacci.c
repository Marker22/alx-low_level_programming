#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return:(0) success
 */
int main(void)
{
	unsigned long int i = 0, j = 1, a = 0, b = 2;
	unsigned long int first, second, third;
	int count;

	printf("%lu, %lu, ", j, b);
	for (count = 2; count < 98; count++)
	{
		if (j + b > LARGEST || a > 0 || i > 0)
		{
			first = (j + b) / LARGEST;
			second = (j + b) % LARGEST;
			third = i + a + first;
			i = a, a = third;
			j = b, b = second;
			printf("%lu%010lu", a, b);
		}
		else
		{
			second = a + b;
			a = b, b = second;
			printf("%lu", b);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
