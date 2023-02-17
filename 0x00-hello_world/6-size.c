#include <stdio.h>
#include <stdint.h>
/**
 * main - main function
 *
 * Return: 0 when success
 */
int main(void)
{
printf("size of s char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
