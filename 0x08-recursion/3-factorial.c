#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * factorial - factorial of a number
 * @n: intger argument
 * Return: fact of n
 */
int factorial(int n)
{
	int s;

	s = 1;
	if (n == 0)
		return (1);
	else if (n > 0)
		return (s * factorial(n - 1));
	else
		return (-1);
}
