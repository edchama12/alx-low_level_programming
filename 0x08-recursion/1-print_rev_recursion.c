#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - reverse a string
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int l, i;

	l = strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
		puts(s[i]);
	}
}
