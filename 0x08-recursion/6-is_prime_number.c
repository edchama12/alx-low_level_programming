#include <stdio.h>
#include "main.h"
/**
 * int is_prime_number - return if n is a prime number
 * @n: intger argument
 * Return: 1 if it prime 0 if else
 */
int is_prime_number(int n)
{
	int test = 0, i;

	for (i = 0; i <= n; i++)
	{
		if (n % i == 0)
		{
			test = 1;
		}
		else
		{
			test = 0;
			break;
		}
	}
	return (test);
}
