#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n:he number of the side sign to be printed
 * Return: 1 if the number is greater than zero
 * 0 if n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
       	else if (n == 0)
}
		_putchar('0');
		return (0);
	}
        else (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

