#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_array - print n character
 * @a: string argument
 * @n: int arguemnt
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			continue;
		}
		printf("%d, ", a[i]);
	}
	putchar(10);
}
