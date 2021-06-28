#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is a pointer
 * @b: is a pointer
*/

void swap_int(int *a, int *b)
{
	int num;

	num = *b;
	*b = *a;
	*a = *b;
}
