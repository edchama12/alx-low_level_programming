#include <stdio.h>
#include "main.h"
/**
 * print_number - print number with putchar
 * @n: intger argument
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar('-');
		i = -i;
	}

	if ((i / 10) > 0)
		print_number(i / 10);

	putchar((i % 10) + '0');
}
