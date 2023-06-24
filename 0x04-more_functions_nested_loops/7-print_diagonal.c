#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - write diagonal
 * @n: intger argument
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0: j < n; j++)
			{
				if (j == i)
				{
					putchar('\\');
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
