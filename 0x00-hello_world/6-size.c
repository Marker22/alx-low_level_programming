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
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(unsigned long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(unsigned long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
