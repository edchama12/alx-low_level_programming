#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - prints string, starting with the first character
 * @str: string arguments
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i <= len - 1; i = i + 2)
	{
		printf("%c", str[i]);
	}
	putchar(10);
}
