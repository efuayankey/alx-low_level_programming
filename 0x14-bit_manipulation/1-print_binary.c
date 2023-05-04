#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{

unsigned int count = 0;
unsigned long int current;
int i;

for (i = 63; i >= 0; i--)
{
	current = n >> i;

	if (current & 1)
	{
		_putchar('1');
			count++;
	}


	else if (count)
	{
		_putchar('0');
}
}

if (!count)
{
	_putchar('0');
}
}
