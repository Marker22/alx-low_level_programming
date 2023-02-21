#include "main.h"

/**
 * print_alphabet - is function which print lowercase a to z letter
 *
 * while - loop is used to iterate the letter
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
