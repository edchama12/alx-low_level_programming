#include <stdio.h>
#include "main.h"

/**
 * print_square - print squares
 *@size: intger argument
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		putchar(10);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			putchar('#');
		}
	}
}
