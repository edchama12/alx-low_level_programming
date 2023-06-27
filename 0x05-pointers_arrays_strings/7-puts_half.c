#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - print half string
 * @str: string argument
 */
void puts_half(char *str)
{
	int i, l, HL;

	l = strlen(str);
	if (l % 2 == 0)
		HL = l / 2;
	else
		HL = ((l - 1) / 2) - 1;
	for (i = HL; i <= l - 1; i++)
	{
		printf("%c", str[i]);
	}
	putchar(10);
}
