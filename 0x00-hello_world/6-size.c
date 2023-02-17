#include <stdio.h>
#include <stdint.h>
/**
 * main - main function
 *
 * Return: 0 when success
 */
int main( void )
{
  printf( "char: %lu\n", sizeof(char));
  printf( "int: %lu\n", sizeof(int));
  printf( "long: %lu\n", sizeof(long));
  printf( "unsigned long: %lu\n", sizeof(unsigned long));
  printf( "int32_t: %lu\n", sizeof(int32_t));
  printf( "uint32_t: %lu\n", sizeof(uint32_t));
  printf( "long long: %lu\n", sizeof(long long));
  printf( "int64_t: %lu\n", sizeof(int64_t));
  printf( "unsigned long long: %lu\n", sizeof(unsigned long long));
  printf( "uint64_t:%lu\n", sizeof(uint64_t )           );
  printf( "size of a float: %lu\n", sizeof(float));
  printf( "\n" );
return 0;
}
