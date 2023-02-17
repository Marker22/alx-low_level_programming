#include <stdio.h>
/**
 * main - a program display alphabetic letter
 *
 * Return: 0 when it work successful
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
