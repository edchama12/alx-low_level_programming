#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: first argument char
 * @c: character must be located
 * Return: pointer of occurence
 */
char *_strchr(char *s, char c)
{
	char *r;

	r = strchr(s, c);
	return (r);
}
