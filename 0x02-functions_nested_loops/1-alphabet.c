#include <stdio.h>
/**
 * main - start point
 * print_alphabet - print alphabet in lower case
 * Return: 0 if sucess
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
