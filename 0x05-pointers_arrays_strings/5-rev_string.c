#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: string argument
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char c;

	while (s[i++])
		l++;
	for (i = l -1; i >= l / 2; i--)
	{
		c = s[i];
		s[i] = s[l - i -1];
		s[l - i - 1] = c;
	}
}
