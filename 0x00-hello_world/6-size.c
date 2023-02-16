#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
/**
 * main - A program main function
 *
 * Return: 0 when success
 */
int main(void)
{
	printf(stderr, "size of a char: %lu byte(s)\n", sizeof(char));
	printf(stderr, "size of an int: %lu byte(s)\n", sizeof(int));
	printf(stderr, "size of a long int: %lu byte(s)\n", sizeof(long int));
	printf(stderr, "size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf(stderr, "size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
