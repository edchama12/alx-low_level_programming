#include <stdio.h>
#include "main.h"
/**
 * print_number - print number with putchar
 * @n: intger argument
 */
void print_number(int n)
{
	if (n >= 10 && n <= 99)
	{
		putchar((n % 100) + '0');
		putchar(10);
	}
	else if (n >= 100 && n <= 999)
	{
		putchar((n % 1000) + '0');
		putchar(10);
	}
	else if (n >= 1000 && n <= 9999)
	{
		putchar((n % 10000) + '0');
		putchar(10);
	}
	else if (n < 0)
	{
		n = n * (-1);
		putchar((n % 10) + '0');
		putchar(10);
	}
	else
	{
		putchar((n % 10) + '0');
	}
}
