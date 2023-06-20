#include <stdio.h>
#include "main.h"
/**
 * int_islower - return 1 if the caracter in argument is in lower case
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
