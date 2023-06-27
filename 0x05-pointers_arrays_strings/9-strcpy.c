#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - strcpy in other string
 * @dest: char argument
 * @src: second char argument
 * Return: dest string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest,src);
	return (**dest);
}
