#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - write diagonal
 * @n: intger argument
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (i == n - 1)
				continue;

			putchar('\n');
		}
	}
}
