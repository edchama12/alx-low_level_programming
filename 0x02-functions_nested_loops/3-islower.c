#include <stdio.h>
#include "main.h"
/**
 * _islower - return 1 if the caracter in argument is in lower case
 * @c: the caracte to test
 * Return: 1 if in lowercase 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
