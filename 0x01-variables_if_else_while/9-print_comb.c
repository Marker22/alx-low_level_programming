#include <stdio.h>
/**
 * main - a program main function is print number separated by comma
 *
 * Return: 0 when a program is successful launched
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number == 9)
			putchar(number + '0');
		else
			putchar(number + '0');
		        putchar(',');
		        putchar(' ');
	}
	return (0);
}
