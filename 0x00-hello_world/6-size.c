#include <stdio.h>
#include <stdint.h>
/**
 * main - main function
 *
 * Return: 0 when success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of s char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
