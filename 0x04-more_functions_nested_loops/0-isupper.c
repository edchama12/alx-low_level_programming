#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - test if the caractre is upper or not
 * @c: intger argument
 * Return: 1 if upper 0 if else
 */
int _isupper(int c)
{
	if(isupper(c))
		return (1);
	else
		return (0);
}
