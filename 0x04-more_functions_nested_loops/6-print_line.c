#include <stdio.h>
#include "main.h"

/**
 * print_line - print lines
 * @n: intger argument
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar(10);
	}
}
