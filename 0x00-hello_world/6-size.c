#include <stdio.h>
/**
 * main - A program main function
 *
 * Return: 0 when success
 */
int main(void)
{
	printf("size of a char: %c byte(s)", sizeof(char));
	printf("size of an int: %d byte(s)", sizeof(int));
	printf("size of a long int: %ld byte(s)", sizeof(long int));
	printf("size of a long long int: %lld byte(s)", sizeof(long long int));
	printf("size of a float: %f byte(s)", sizeof(float));
	return (0);
}
