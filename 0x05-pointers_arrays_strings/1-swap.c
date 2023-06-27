#include <stdio.h>
#include "main.h"
/**
 * swap_int - change to number value
 * @a: first intger number
 * @b: second intger number
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
