#include <stdio.h>
#include "main.h"

/**
 * print_square - print squares
 *@size: intger argument
 */
void print_square(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		putchar('#');
	}
	putchar(10);
}
