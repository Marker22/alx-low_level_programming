#include <stdio.h>
/**
 * main - a program function which display uppercase and lowercase
 *
 * Return: 0 when a program is success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
