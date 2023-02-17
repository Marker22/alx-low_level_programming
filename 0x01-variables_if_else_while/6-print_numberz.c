#include <stdio.h>
/**
 * main - a program main function which print numbers
 *
 * Return: 0 when a program is run successful
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');
	putchar('\n');
	return (0);
}
