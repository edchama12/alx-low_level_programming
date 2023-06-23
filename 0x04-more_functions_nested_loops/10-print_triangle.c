#include <stdio.h>
#include "main.h"
/**
 * print_triangle - write a triangle with #
 * @size: intger argument
 */
void print_triangle(int size)
{
	int i, j, l;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				putchar(' ');
			}
			for (l = 0; l < i; l++)
			{
				putchar('#');
			}
			if (i == size)
				continue;
			putchar(10);
		}
	}
	
	putchar(10);
}
