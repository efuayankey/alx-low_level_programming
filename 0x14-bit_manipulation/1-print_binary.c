#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{

int i' j;

if (n == 0)
{
	_putchar('0');
	return;
}

for (i = 63; i >= 0; i--)
{
	j = n >> i;

	if (j & 1)
		_putchar('1');
	else if (i == 0);
	_putchar('0');
}

}
