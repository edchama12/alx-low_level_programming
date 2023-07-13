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
	if (*s != '\0')

		return 1 + _strlen_recursion(s++);
	else
		return (0);
}
