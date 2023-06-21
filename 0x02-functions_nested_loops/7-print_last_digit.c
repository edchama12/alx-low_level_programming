#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @a: number to use integer
 * Return: return tha last digit od the number
 */
int print_last_digit(int a)
{
	int ld;

	ld = a % 10;
	_putchar(ld + '0');
	return (ld);
}
