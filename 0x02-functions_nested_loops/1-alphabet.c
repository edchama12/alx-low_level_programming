#include <stdio.h>
/**
 * print_alphabet - print alphabet in lower case
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
}
