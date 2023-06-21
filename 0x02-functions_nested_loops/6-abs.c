#include <stdio.h>
#include "main.h"
/**
 * _abs - absolute value of a number
 * @a: the number to calculate
 * Return: the absolute value od a
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * (-1));
}
