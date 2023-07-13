#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - reverse a string
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
