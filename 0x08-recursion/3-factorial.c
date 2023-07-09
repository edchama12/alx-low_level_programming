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
	if (n == 1)
		return (s);
	else
		return (s * factorial(n - 1);
}
