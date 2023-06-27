#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: string argument
 */
void rev_string(char *s)
{
	int l, i, cpt;
	char *c;

	*c = "";
	strcpy(c, s);
	l = strlen(s);
	cpt = 0;
	for (i = l; i >= 1; l--)
	{
		s[cpt] = c[i];
		cpt++;
	}
}


