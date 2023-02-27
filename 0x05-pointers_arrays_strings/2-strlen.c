#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count_str = 0;

	while (*(s + count_str) != '\0')
		count_str++;
	return (count_str);
}
