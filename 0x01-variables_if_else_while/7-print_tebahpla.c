#include <stdio.h>
/**
 * main - a program main function which print z to a
 *
 * Return: 0 when a program is successful launched
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
