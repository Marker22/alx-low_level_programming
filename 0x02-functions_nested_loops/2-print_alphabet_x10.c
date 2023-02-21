#include "main.h"

/**
 * print_alphabet_x10 - a program function which print a to z 10 times
 *
 * while: loop is nested here
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
