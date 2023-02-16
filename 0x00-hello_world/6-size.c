#include <stdio.h>
/**
 * main - A program main function
 *
 * Return: 0 when success
 */
int main(void)
{
	printf("size of a char: %ld byte(s)", sizeof(char));
	printf("size of an int: %ld byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
