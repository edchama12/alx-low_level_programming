#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: first char argument
 * @accept: subtring char argument
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r;

	r = strspn(s, accept);
	return (r);
}
