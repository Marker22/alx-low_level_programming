#include <stdio.h>
/**
 * main - a program main function display all letter except q and e
 *
 * Return: 0 when the program is success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	putchar('\n');
	return (0);
}
