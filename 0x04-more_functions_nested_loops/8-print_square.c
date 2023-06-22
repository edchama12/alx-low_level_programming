#include <stdio.h>
#include "main.h"

/**
 * print_square - print squares
 *@size: intger argument
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar(10);
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				putchar('#');
			}
			putchar(10);
		}
	}
}
