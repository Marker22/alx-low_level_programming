#include <stdio.h>
/**
 * main - a program function which print numbers 1 - 10
 *
 * Return: 0 when a program is success
 */

int main(void)
{
	int Number;

	for (Number = 0; Number < 10; Number++)
		printf("%d", Number);
	printf("\n");
	return (0);
}
