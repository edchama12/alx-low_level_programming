#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: first char argument
 * @accept: second char argument
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *l;

	l = strpbrk(s, accept);
	return (l);
}
