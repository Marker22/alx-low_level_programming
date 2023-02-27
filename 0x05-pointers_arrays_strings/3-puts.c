#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int count_str = 0;

	while (count_str >= 0)
	{
		if (str[count_str] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count_str]);
		count_str++;
	}
}
