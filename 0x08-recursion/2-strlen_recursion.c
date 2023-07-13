#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - length og string
 * @s: char pointer argument
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
