#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * string_toupper - lower case to upper case
 * @s: char pointer argument
 * Retun: char pointer
 */
cahr *string_toupper(char *s)
{
	int l, i;

	l = strlen(s);
	for (i = 0; i <= l - 1; i++)
	{
		if (s[i] >= 97 || s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
