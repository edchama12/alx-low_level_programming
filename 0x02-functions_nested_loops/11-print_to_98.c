#include <stdio.h>
#include "main.h"
/**
 * print_to_98: print from n to 98
 * @n: the start number
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <=98; i++)
	{
		if (i == 98)
		{
			printf("%d/n", i);
			continue;
		}
		printf("%d, ", i);
	}
}
