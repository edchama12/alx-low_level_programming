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

	if (*s != '\0')
	{
		l++;
		return (*s++);
	}
	return (l);
}
