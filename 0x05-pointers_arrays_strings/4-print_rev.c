#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - write reverse string
 * @s: string argument
 */
void print_rev(char *s)
{
	int l, i;

	l = strlen(s);
	for (i = l; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
