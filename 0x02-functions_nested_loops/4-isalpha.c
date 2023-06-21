#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - test if caracte is lower and upper case
 * @c: intger number
 * Return: 1 if lower or upper case 0 if else
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
