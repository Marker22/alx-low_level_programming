#include <stdio.h>
/**
 * main - a program main function which launch the program
 *
 * Return: 0 when a program is success
 */

int main(void)
{
	int Num;
	char Lett;

	for (Num = 0; Num < 10; Num++)
		putchar(Num + '0');
	for (Lett = 'a'; Lett <= 'f'; Lett++)
		putchar(Lett);
	putchar('\n');
	return (0);
}
