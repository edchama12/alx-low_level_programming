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
		putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (i == n - 1)
				continue;
			putchar(10);
		}
	}
}
		
