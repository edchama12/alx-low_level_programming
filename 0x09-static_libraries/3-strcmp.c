#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: dirst string argument
 * @s2: second string argument
 * Return: 0 or + or -
 */
int _strcmp(char *s1, char *s2)
{
	int l;

	l = strcmp(s1, s2);
	return (l);
}
