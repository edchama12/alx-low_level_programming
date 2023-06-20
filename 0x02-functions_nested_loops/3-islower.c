#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * int_islower - return 1 if the caracter in argument is in lower case
 */
int _islower(int c)
{
	int res = islower(c);

	if (res == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
