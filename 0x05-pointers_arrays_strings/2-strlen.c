#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - lenght of a string
 * @s: string argument
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int cpt;

	while (*s != '\0')
	{
		cpt++;
		*s++;
	}
	return (cpt);
}

