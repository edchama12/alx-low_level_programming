#include <stdio.h>
#include "main.h"
/**
 * print_sign - write the sign of a number
 * @n: intger argument
 * Return: return 1 if greater than 0 return 0 if is zero return 61 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
	       _putchar('0');
	       return (0);
	}
	if ( n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
